class Solution {
public:
    bool isPrime(int n)
    {
        if(n<=1) return false;
        else if(n==2) return true;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int ans=0;
        for(int i=left;i<=right;i++)
        {
            int num=i;
            int set=0;
            while(num>0)
            {
                set+=(num&1);
                num>>=1;
            }
            if(isPrime(set)) ans++;
        }
        return ans;
    }
};