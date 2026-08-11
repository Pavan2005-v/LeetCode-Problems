class Solution {
public:
    int reverseBits(int n) {
        int ans=0;
        for(int i=31;i>=0;i--)
        {
            if(1<<i&n)
            {
                ans^=(1<<(abs(i-31)));
            }
        }
        return ans;
    }
};