class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<=2) return -1;
        sort(nums.begin(),nums.end());
        // int maxi=nums[nums.size()-1];
        // int mini=nums[0];
        return nums[1];
    }
};