class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<=1) return false;
        if(nums[0]!=1) return false;
        for(int i=0;i<nums.size()-2;i++)
        {
            if(nums[i]!=nums[i+1]-1)
            {
                return false;
            }
        }
        return nums[nums.size()-1]==nums[nums.size()-2];
    }
};