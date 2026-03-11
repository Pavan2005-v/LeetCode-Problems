class Solution {
public:
    int minBitFlips(int start, int end) {
        int num=start^end;
        int count=0;
        while(num>0)
        {
            if(num&1) count++;
            num>>=1;
        }
        return count;      
    }
};