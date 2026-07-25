class Solution {
public:
    int maxProduct(int n) {
        int maxi=-1,maxi1=-1,org=n,count=0,pt=0;
        while(n>0)
        {
            if(n%10>maxi)
            {
                maxi=n%10;
                pt=count;
            }
            n/=10;
            count++;
        }
        count=0;
        while(org>0)
        {
            if(org%10>maxi1&&count!=pt)
            {
                maxi1=org%10;
            }
            org/=10;
            count++;
        }
        return maxi*maxi1;
    }
};