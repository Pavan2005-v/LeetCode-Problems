class Solution {
public:
    bool isValid(string s,int l,int r,int k)
    {
        int ones=0,zeros=0;
        for(int i=l;i<=r;i++)
        {
            if(s[i]=='0') zeros++;
            else ones++;
        }
        return ones<=k||zeros<=k;
    }
    int countKConstraintSubstrings(string s, int k) {
        int l=0,r=0,ans=0;
        while(r<s.length())
        {
            while(l<r&&!isValid(s,l,r,k))
            {
                l++;
            }
            ans+=(r-l+1);
            r++;
        }
        return ans;
    }
};