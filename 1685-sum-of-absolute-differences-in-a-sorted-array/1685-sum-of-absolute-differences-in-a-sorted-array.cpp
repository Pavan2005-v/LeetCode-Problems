class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int>pref(n),suff(n),ans(n);
        pref[0]=nums[0];
        suff[n-1]=nums[n-1];
        for(int i=1;i<n;i++)
        {
            pref[i]=nums[i]+pref[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            suff[i]=suff[i+1]+nums[i];
        }
        ans[0]=abs(suff[1]-(long long)(nums[0]*(n-1)));
        ans[n-1]=abs(pref[n-2]-(long long)(nums[n-1]*(n-1)));
        for(int i=1;i<n-1;i++)
        {
            ans[i]=abs(pref[i-1]-(long long)(nums[i]*i))+abs(suff[i+1]-(long long)(nums[i]*(n-i-1)));
        }
        return ans;
    }
};