class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>freq(26);
        for(char c:s1) freq[c-'a']++;
        int wind_size=s1.length();
        for(int i=0;i<s2.length();i++)
        {
            vector<int>freq1(26);
            int idx=i; 
            int win=0;
            while(win<wind_size&&idx<s2.length())
            {
                freq1[s2[idx]-'a']++;
                idx++;
                win++;
            }
            int k=0;
            for(int j=0;j<freq1.size();j++)
            {
                if(freq[j]!=freq1[j])
                {
                    k=1;
                    break;
                }
            }
            if(!k) return true;
        }
        return false;
    }
};