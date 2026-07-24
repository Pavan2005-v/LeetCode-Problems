class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans=0;
        int n=nums.size(),maxi=nums[0];
        vector<int>suff(n);
        suff[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suff[i]=max(suff[i+1],nums[i]);
        }
        for(int i=1;i<n-1;i++)
        {
            ans=max(ans,1LL*(maxi-nums[i])*suff[i+1]);
            maxi=max(maxi,nums[i]);
        }
        return ans;
    }
};