class Solution {
public:
    int bitwiseComplement(int n) {
        int ans=0;
        int ind=0;
        if(n==0) return 1;
        while(n>0)
        {
            if(!(n&1)) 
            {
                ans|=(1<<ind);
            }
            ind++;
            n>>=1;
        }
        return ans;
    }
};