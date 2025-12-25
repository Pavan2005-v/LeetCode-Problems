class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int n=num;
        while(num>0)
        {
            if(num%10!=0)
            {
                if(n%(num%10)==0) count++;
            }
            num/=10;
        }
        return count;
    }
};