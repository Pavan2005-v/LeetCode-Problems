class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        vector<int>temp;
        for(int i=0;i<s.length();i++)
        {
            temp.push_back(abs(s[i]-t[i]));
        }
        int ans=0;
        for(int i=0;i<temp.size();i++)
        {
            int leng=0;
            int t=maxCost;
            for(int j=i;j<temp.size();j++)
            {
                if(t>=temp[j])
                {
                    t-=temp[j];
                    leng++;
                }
                else break;
            }
            ans=max(ans,leng);
        }
        return ans;
    }
};