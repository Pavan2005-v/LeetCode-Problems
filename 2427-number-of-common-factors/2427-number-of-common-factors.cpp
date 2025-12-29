class Solution {
public:
    int commonFactors(int a, int b) {
        int it;
        if(a>=b) it=a;
        else it=b;
        int count=0;
        for(int i=1;i<=it;i++)
        {
            if(a%i==0&&b%i==0) count++;
        }
        return count;
    }
};