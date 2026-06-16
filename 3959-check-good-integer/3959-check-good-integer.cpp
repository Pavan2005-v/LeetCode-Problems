class Solution {
public:
    bool checkGoodInteger(int n) {
        long long int squareSum=0;
        long long int digitSum=0;
        while(n>0)
        {
            digitSum+=n%10;
            squareSum+=((n%10)*(n%10));
            n/=10;
        }
        return squareSum-digitSum>=50;
    }
};