class Solution {
public:
    int countHomogenous(string s) {
        int l=0,r=0;
        long long int ans=0;
        while(r<s.length())
        {
            if(s[r]==s[l])
            {
                r++;
            }
            else
            {
                int size=r-l;
                ans=(ans+((long long)size*(size+1)/2));
                l=r;
            }
        }
        int size=r-l;
        ans=(ans+((long long)size*(size+1)/2));
        return ans%1000000007;

    }
};