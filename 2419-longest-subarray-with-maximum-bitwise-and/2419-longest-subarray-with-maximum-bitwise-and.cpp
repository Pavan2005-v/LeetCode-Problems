class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
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