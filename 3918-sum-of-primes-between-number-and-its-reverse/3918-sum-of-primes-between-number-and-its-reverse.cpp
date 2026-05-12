class Solution {
public:
    bool isPrime(int num)
    {
        if(num<=1) return false;
        for(int i=2;i*i<=num;i++)
        {
            if(num%i==0) return false;
        }
        return true;
    }
    int sumOfPrimesInRange(int n) {
        int org=n;
        int num2=0;
        while(n>0)
        {
            num2=num2*10+(n%10);
            n/=10;
        }
        int num1=min(org,num2);
        if(num1!=org)
        {
            num2=org;
        }
        int sum=0;
        for(int i=num1;i<=num2;i++)
        {
            if(isPrime(i)) sum+=i;
        }
        return sum;
    }
};