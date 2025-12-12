class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int countp=0;
        int countn=0;
        for(int i:nums)
        {
            if(i<0) countn++;
            else if(i>0) countp++;
        }
        return countn>countp?countn:countp;
    }
};