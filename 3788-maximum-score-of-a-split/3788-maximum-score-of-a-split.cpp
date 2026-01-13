class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        vector<long long> ans(nums.size());
        ans[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            ans[i]=ans[i-1]+nums[i];
        }
        long long int ans1=INT_MIN;
        vector<long long>suf(nums.size());
        suf[suf.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--)
        {
            suf[i]=min(suf[i+1],(long long)nums[i]);
        }
        for(int i=0;i<ans.size()-1;i++)
        {
            ans1=max(ans1,(long long)ans[i]-suf[i+1]);
        }
        return ans1;
    }
};