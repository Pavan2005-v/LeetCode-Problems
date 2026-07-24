class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int>suff(n),ans(n);
        suff[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suff[i]=suff[i+1]+nums[i];
        }
        ans[0]=abs(suff[1]-(long long)(nums[0]*(n-1)));
        long long sum=nums[0];
        for(int i=1;i<n-1;i++)
        {
            ans[i]=abs(sum-(long long)(nums[i]*i))+abs(suff[i+1]-(long long)(nums[i]*(n-i-1)));
            sum+=nums[i];
        }
        ans[n-1]=abs(sum-(long long)(nums[n-1]*(n-1)));
        return ans;
    }
};