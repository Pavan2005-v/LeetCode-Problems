class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,r=0,ans=INT_MAX;
        long long sum=0;
        while(r<nums.size())
        {
            sum+=nums[r];
            while(sum>=target)
            {
                ans=min(ans,r-l+1);
                sum-=nums[l];
                l++;
            }
            r++;
        }
        return (ans==INT_MAX)?0:ans;
    }
};