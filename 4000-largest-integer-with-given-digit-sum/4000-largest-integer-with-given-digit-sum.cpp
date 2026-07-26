class Solution {
public:
    int largestInteger(int n, int s) {
        if(s==0) return 0;
        if(s>n*9) return -1;
        int num=0;
        while(n>0)
        {
            if(s-9>0)
            {
                num=num*10+9;
                s-=9;
            }
            else
            {
                num=num*10+s;
                s=0;
            }
            n--;
        }
        return num;
    }
};