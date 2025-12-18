class Solution {
public:
    char repeatedCharacter(string s) {
        int mini=INT_MAX;
        char ans;
        for(int i=0;i<s.length();i++)
        {
            for(int j=i+1;j<s.length();j++)
            {
                if(s[i]==s[j])
                {
                    if(j<mini)
                    {
                        mini=j;
                        ans=s[j];
                    }
                }
            }
        }
        return ans;
    }
};