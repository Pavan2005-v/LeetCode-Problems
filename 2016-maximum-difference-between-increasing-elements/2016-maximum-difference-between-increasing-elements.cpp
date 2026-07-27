class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size(),ans=-1;
        vector<int>suff(n);
        suff[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suff[i]=max(suff[i+1],nums[i]);
        }
        for(int i=0;i<n-1;i++)
        {
            if(suff[i+1]!=nums[i]) ans=max(ans,suff[i+1]-nums[i]);
        }
        return ans;
    }
};