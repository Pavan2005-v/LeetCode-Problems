class Solution {
public:
    vector<int> evenOddBit(int n) {
        int c=0;
        int e=0;
        int o=0;
        while(n>0)
        {
            if((n&1)&&(c&1)) o++;
            else if((n&1)&&!(c&1)) e++;
            n>>=1;
            c++;
        }
        return {e,o};
    }
};