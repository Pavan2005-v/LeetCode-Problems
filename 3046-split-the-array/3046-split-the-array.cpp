class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i:nums)
        {
            mpp[i]++;
            if(mpp[i]>2) return false;
        }
        int count=0;
        for(auto it:mpp)
        {
            if(it.second&1) count++;
        }
        if(count&1) return false;
        return true;
    }
};