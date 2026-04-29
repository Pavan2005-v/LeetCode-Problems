class Solution {
public:
    bool validDigit(int n, int x) {
        int k=0;
        while(n>=10)
        {
            if(n%10==x)
            {
                k=1;
            }
            n/=10;
        }
        if(k&&n!=x) return true;
        return false;
    }
};