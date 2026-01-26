class Solution {
public:
    bool isPrime(int n)
    {
        if(n<=1) return false;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0) return false;
        }
        return true;
    }
    bool completePrime(int num) {
        if(!isPrime(num)) return false;
        vector<int>temp;
        while(num>0)
        {
            temp.push_back(num%10);
            num/=10;
        }
        vector<int>temp1=temp;
        reverse(temp1.begin(),temp1.end());
        long long int c=10;
        for(int i=1;i<temp.size();i++)
        {
            temp[i]=temp[i-1]+temp[i]*c;
            c*=10;
        }
        for(int i=1;i<temp1.size();i++)
        {
            temp1[i]=temp1[i-1]*10+temp1[i];
        }
        for(int i=0;i<temp.size();i++)
        {
            if(!isPrime(temp[i])) return false;
        }
        for(int i=0;i<temp1.size();i++)
        {
            if(!isPrime(temp1[i])) return false;
        }
        return true;
    }
};