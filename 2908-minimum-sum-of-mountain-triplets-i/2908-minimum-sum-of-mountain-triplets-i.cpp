class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n=nums.size(),mini=nums[0],ans=INT_MAX;
        vector<int>suff(n);
        suff[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suff[i]=min(suff[i+1],nums[i]);
        }
        for(int i=1;i<n-1;i++)
        {
            if(mini<nums[i]&&suff[i+1]<nums[i])
            {
                ans=min(ans,mini+nums[i]+suff[i+1]);
            }
            mini=min(nums[i],mini);
        }
        return ans==INT_MAX?-1:ans;
    }
};