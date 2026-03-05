class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi=INT_MIN;
        for(int i:nums) maxi=max(maxi,i);
        int c=1;
        int ans=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==maxi&&nums[i]==nums[i+1])
            {
                c++;
            }
            else
            {
                ans=max(ans,c);
                c=1;
            }
        }
        ans=max(ans,c);
        return ans;
    }
};