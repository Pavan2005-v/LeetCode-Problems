class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i:nums)mpp[i]++;
        for(auto it:mpp)
        {
            if(it.second>=2) return it.first;
        }
        return -1;
    }
};