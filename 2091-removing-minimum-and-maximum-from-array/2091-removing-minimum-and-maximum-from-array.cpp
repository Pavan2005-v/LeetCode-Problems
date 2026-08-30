class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size(),ind1,ind2,maxi=INT_MIN,mini=INT_MAX,ans;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>maxi)
            {
                maxi=nums[i];
                ind1=i;
            }
            if(nums[i]<mini)
            {
                mini=nums[i];
                ind2=i;
            }
        }
        if(ind1>ind2)
        {
            ans=ind2+1+(n-ind1);
        }
        else
        {
            ans=ind1+1+(n-ind2);
        }
        ans=min(ans,max(ind1,ind2)+1);
        ans=min(ans,n-min(ind1,ind2));
        return ans;
    }
};