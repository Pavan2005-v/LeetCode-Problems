class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        for(int i=0;i<4;i++)
        {
            if(s1[i]!=s2[i])
            {
                for(int j=i+1;j<4;j++)
                {
                    if(s2[i]==s1[j]&&j-i==2)
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