class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long>ans(n);
        int maxi=nums[0];
        ans[0]=maxi*2;
        for(int i=1;i<n;i++)
        {
            maxi=max(nums[i],maxi);
            ans[i]=ans[i-1]+nums[i]+maxi;
        }
        return ans;
    }
};