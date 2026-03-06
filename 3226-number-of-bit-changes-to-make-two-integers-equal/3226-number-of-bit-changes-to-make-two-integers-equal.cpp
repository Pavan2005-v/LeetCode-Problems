class Solution {
public:
    int minChanges(int n, int k) {
        int count=0;
        while(n>0&&k>0)
        {
            if(!(n&1)&&(k&1)) return -1;
            else if((n&1)&&(!(k&1))) count++;
            n>>=1;
            k>>=1;
        }
        while(n>0)
        {
            if((n&1)) count++;
            n>>=1;
        }
        while(k>0)
        {
            if(k&1) return -1;
            k>>=1;
        }
        return count;
    }
};