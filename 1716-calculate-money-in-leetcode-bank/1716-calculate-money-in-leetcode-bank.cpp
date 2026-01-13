class Solution {
public:
    int totalMoney(int n) {
        int iter=(n/7)+1;
        int c=1;
        int ans=0;
        int co=0;
        if(n<=7)
        {
            return ((n)*(n+1))/2;
        }
        while(n>0)
        {
            if(n>(c+7))
            {
                for(int i=c;i<c+7;i++)
                {
                    ans+=i;
                    co++;
                }
                c++;
                n-=7;
                iter--;
            }
            else
            {
                int t=n;
                for(int i=c;i<c+t;i++)
                {
                    ans+=i;
                    n--;
                }
                iter--;
            }
        }
        return ans;
    }
};