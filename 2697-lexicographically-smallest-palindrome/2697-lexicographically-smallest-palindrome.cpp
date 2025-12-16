class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int p1=0;
        int p2=s.size()-1;
        while(p1<p2)
        {
            if(s[p1]!=s[p2])
            {
                bool a=s[p1]<s[p2];
                if(a)
                {
                    s[p2]=s[p1];
                }
                else s[p1]=s[p2];
            }
            p1++;
            p2--;
        }
        return s;
    }
};