class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int k=1;
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]>=s2[i])
            {
                continue;
            }
            else k=0;
        }
        int d=1;
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]<=s2[i])
            {
                continue;
            }
            else d=0;
        }
        return d==1||k==1;       

    }
};