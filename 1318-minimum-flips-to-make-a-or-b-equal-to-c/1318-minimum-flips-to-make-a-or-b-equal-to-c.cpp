class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans=0;
        while(c>0)
        {
            if(((a&1)|(b&1))!=(c&1))
            {
                if(c&1) ans++;
                else
                {
                    if((a&1)^(b&1)) ans++;
                    else ans+=2;
                }
            }
            c>>=1;
            a>>=1;
            b>>=1;
        }
        cout<<ans;
        while(a>0)
        {
            if(((a&1)^(b&1))) ans++;
            else if(((a&1)&&(b&1))) ans+=2;
            a>>=1;
            b>>=1;
        }
        while(b>0)
        {
            if(((a&1)^(b&1))) ans++;
            else if(((a&1)&&(b&1))) ans+=2;
            a>>=1;
            b>>=1;
        }
        return ans;
    }
};