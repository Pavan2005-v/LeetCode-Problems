class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int c=0;
        while(num2>0)
        {
            int temp=(num2)&(-num2);
            num2^=(temp);
            c++;
        }
        int ans=0;
        for(int i=31;i>=0;i--)
        {
            if(c>0&&(num1&(1<<i)))
            {
                c--;
                ans|=(1<<i);
            }
        }
        if(c>0)
        {
            for(int i=0;i<32;i++)
            {
                if(!(ans&(1<<i))&&c>0)
                {
                    ans|=(1<<i);
                    c--;
                }
            }
        }
        return ans;
    }
};