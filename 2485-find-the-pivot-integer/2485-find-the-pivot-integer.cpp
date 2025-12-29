class Solution {
public:
    int pivotInteger(int n) {
        int sum=0;
        if(n==1) return 1;
        while(n>0)
        {
            sum+=n;
            n--;
            int temp=((n-1)*(n))/2;
            cout<<temp<<" "<<sum<<endl;
            if(sum==temp) return n;
        }
        return -1;
    }
};