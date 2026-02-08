class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ele=nums.size()/2;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[ele]>nums[i])
            {
                ans+=(nums[ele]-nums[i]);
            }
            else if(nums[ele]<nums[i])
            {
                ans+=(nums[i]-nums[ele]);
            }
        }
        return ans;
    }
};