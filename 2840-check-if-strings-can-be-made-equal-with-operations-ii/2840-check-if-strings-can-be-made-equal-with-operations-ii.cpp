class Solution {
public:
    bool checkStrings(string s1, string s2) {
        for(char c:s1)
        {
            if(!s2.contains(c)) return false;
        }
        for(char c:s2)
        {
            if(!s1.contains(c)) return false;
        }
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]!=s2[i])
            {
                for(int j=i+2;j<s1.length();j+=2)
                {
                    if(s1[j]==s2[i])
                    {
                        swap(s1[i],s1[j]);
                        break;
                    }
                }
            }
        }
        return s1==s2;
    }
};