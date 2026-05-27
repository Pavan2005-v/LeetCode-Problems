class Solution {
public:
    int numberOfSpecialChars(string s) {
        int ans=0;
        vector<int>lower(26,-1);
        vector<int>temp(26);
        vector<int>temp1(26);
        for(int i=0;i<s.length();i++)
        {
            if(islower(s[i]))
            {
                lower[s[i]-'a']=i;
            }
        }
        for(int i=0;i<s.length();i++)
        {
            if(isupper(s[i]))
            {
                char ch=tolower(s[i]);
                if(lower[ch-'a']!=-1)
                {
                    if(lower[ch-'a']<i&&temp[ch-'a']==0)
                    {
                        temp1[ch-'a']++;
                    }
                    else if(lower[ch-'a']>i)
                    {
                        temp[ch-'a']++;
                    }
                }
            }
        }
        for(int i:temp1)
        {
            if(i!=0) ans++;
        }
        return ans;
    }
};