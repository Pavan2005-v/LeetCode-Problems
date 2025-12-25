class Solution {
public:
    int smallestEvenMultiple(int n) {
        int temp=n;
        while(1)
        {
            if(temp%2==0&&temp%n==0)
            {
                return temp;
            }
            temp++;
        }
    }
};