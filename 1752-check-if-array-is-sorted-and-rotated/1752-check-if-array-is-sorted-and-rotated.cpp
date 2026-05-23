class Solution {
public:
    bool check(vector<int>& nums) {
       int count=0;
       for(int i=0;i<nums.size()-1;i++)
       {
            if(nums[i]>nums[i+1]) count++;
            if(count>1) return false;
       }
       if(nums[0]<nums[nums.size()-1]) count++;
       return count<=1;
    }
};