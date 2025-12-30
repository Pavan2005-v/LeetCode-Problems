class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        else if(n==2) return 1;
        else if(n==3) return 2;
        int a=0;
        int b=1;
        int c=1;
        int ans=0;
        for(int i=3;i<n;i++)
        {
            int temp=a+b+c;
            a=b;
            b=c;
            c=temp;
        }
        return a+b+c;
    }
};