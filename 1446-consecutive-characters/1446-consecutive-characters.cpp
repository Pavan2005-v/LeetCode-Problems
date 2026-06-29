class Solution {
public:
    int maxPower(string s) {
        int ans=0;
        int l=0,r=0;
        while(r<s.length())
        {
            if(s[l]==s[r])
            {
                r++;
            }
            else
            {
                ans=max(ans,r-l);
                l=r;
            }
        }
        ans=max(ans,r-l);
        return ans;
    }
};