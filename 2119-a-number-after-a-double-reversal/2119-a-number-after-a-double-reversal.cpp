class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num<=9) return true;
        int temp=0;
        int num1=num;
        while(num1>0)
        {
            temp=temp*10+(num1%10);
            num1/=10;
        }
        int d=(int)(log10(temp)+1);
        int e=(int)(log10(num)+1);
        return d==e;
    }
};