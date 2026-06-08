class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int ans=0;
        int x=1;
        while(1)
        {
            if(abs(n-x)<=k&&(n&x)==0) ans+=x;
            if(abs(n-x)>k&&x>n) break;
            x++;
        }
        return ans;
    }
};