class Solution {
public:
    int minBitFlips(int start, int end) {
        int count=0;
        while(start>0||end>0)
        {
            if((start&1)^(end&1)) count++;
            start>>=1;
            end>>=1;
        }
        return count;        
    }
};