class Solution {
public:
    long long sumAndMultiply(int n) {
        long long num=0,sum=0,ans=0;
        while(n>0)
        {
            int num1=n%10;
            if(num1!=0) num=num*10+num1;
            sum+=num1;
            n/=10;
        }
        while(num>0)
        {
            if(num%10!=0) ans=ans*10+num%10;
            num/=10;
        }
        return (long long)ans*sum;
    }
};