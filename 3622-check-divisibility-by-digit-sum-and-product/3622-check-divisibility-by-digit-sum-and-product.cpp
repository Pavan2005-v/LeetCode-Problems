class Solution {
public:
    bool checkDivisibility(int n) {
        long long pro=1;
        int sum=0,org=n;
        while(n>0)
        {
            pro*=(n%10);
            sum+=(n%10);
            n/=10;
        }
        return org%(pro+sum)==0;
    }
};