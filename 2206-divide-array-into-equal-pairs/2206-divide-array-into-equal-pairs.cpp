class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i:nums) mpp[i]++;
        for(auto it:mpp)
        {
            if(it.second%2!=0) return false;
        }
        return true;
    }
};