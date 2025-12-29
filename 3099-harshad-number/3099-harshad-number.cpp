class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int count=0;
        int temp=x;
        while(temp>0)
        {
            count+=(temp%10);
            temp/=10;
        }
        if(x%count==0) return count;
        else return -1;
    }
};