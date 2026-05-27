class Solution {
public:
    int numberOfSpecialChars(string s) {
        int ans=0;
        unordered_map<char,int>mpp2;
        vector<int>temp(26);
        vector<int>temp1(26);
        for(int i=0;i<s.length();i++)
        {
            if(islower(s[i]))
            {
                mpp2[s[i]]=i;
            }
        }
        for(int i=0;i<s.length();i++)
        {
            if(isupper(s[i]))
            {
                char ch=tolower(s[i]);
                if(mpp2.contains(ch))
                {
                    if(mpp2[ch]<i&&temp[ch-'a']==0)
                    {
                        temp1[ch-'a']++;
                    }
                    else if(mpp2[ch]>i)
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