class Solution {
public:
    int numSub(string s) {
        int l=0,r=0;
        int pt=0;
        long long int ans=0;
        while(r<s.length())
        {
            if(s[r]=='1')
            {
                r++;
                pt=1;
            }
            else
            {
                if(pt)
                {
                    int size=r-l;
                    ans=ans+((long long)size*(size+1)/2);
                    l=r;
                }
                else
                {
                    l++;
                    r++;
                }
                pt=0;
            }
        }
        if(pt)
        {
            int size=r-l;
            ans=ans+((long long)size*(size+1)/2);
        }
        return ans%1000000007;
    }
};