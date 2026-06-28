class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>&nums) {
        sort(nums.begin(),nums.end());
        nums[0]=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(abs(nums[i]-nums[i+1])>1)
            {
                nums[i+1]=nums[i]+1;
            }
        }
        return nums[nums.size()-1];
    }
};