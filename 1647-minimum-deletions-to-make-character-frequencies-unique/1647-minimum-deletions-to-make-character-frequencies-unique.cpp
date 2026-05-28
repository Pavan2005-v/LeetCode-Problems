class Solution {
public:
    int minDeletions(string s) {
        vector<int>freq(26);
        for(char c:s)
        {
            freq[c-'a']++;
        }
        int ans=0;
        vector<int>freq1;
        for(int i:freq)
        {
            if(i!=0) freq1.push_back(i);
        }
        sort(freq1.begin(),freq1.end());
        unordered_set<int>temp;
        for(int i=0;i<freq1.size();i++)
        {
            if(!temp.contains(freq1[i]))
            {
                temp.insert(freq1[i]);
            }
            else
            {
                int num=freq1[i];
                while(num>0)
                {
                    num--;
                    ans++;
                    if(!temp.contains(num))
                    {
                        temp.insert(num);
                        break;
                    }
                }
            }
        }
        return ans;

    }
};