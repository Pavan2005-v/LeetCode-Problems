class Solution {
public:
    int minOperations(vector<int>& nums) {
        int num=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=num) return 1;
        }
        return 0;
    }
};