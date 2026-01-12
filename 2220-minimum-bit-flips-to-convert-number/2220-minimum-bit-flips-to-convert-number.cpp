class Solution {
public:
    int minBitFlips(int start, int end) {
        int count=0;
        while(start>0&&end>0)
        {
            if((start%2)!=(end%2)) count++;
            start/=2;
            end/=2;
        }
        while(start>0||end>0)
        {
            if(start%2!=end%2) count++;
            start/=2;
            end/=2;
        }
        return count;
    }
};