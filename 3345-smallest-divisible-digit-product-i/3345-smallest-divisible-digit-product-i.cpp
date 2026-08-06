class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<=100;i++)
        {
            int num=i;
            long long pro=1;
            while(num>0)
            {
                pro*=(num%10);
                num/=10;
            }
            if(pro%t==0) return i;
        }
        return -1;
    }
};