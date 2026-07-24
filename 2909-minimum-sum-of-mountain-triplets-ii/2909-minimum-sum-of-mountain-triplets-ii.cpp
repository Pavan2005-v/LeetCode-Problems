class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n=nums.size(),ans=INT_MAX,mini=nums[0];
        vector<int>suff(n);
        suff[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suff[i]=min(suff[i+1],nums[i]);
        }
        for(int i=1;i<n-1;i++)
        {
            if(mini<nums[i]&&nums[i]>suff[i+1])
            {
                ans=min(ans,mini+nums[i]+suff[i+1]);
            }
            mini=min(mini,nums[i]);
        }
        return ans==INT_MAX?-1:ans;
    }
};