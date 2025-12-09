class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=(nums[nums.size()-1]*nums[nums.size()-2])-(nums[0]*nums[1]);
        return ans;
    }
};