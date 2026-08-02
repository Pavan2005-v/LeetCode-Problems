class Solution {
public:
    int func(vector<int>nums,int k)
    {
        int ans=INT_MAX,sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        if(sum>0) ans=min(ans,sum);
        int l=0,r=k-1;
        while(r<nums.size()-1)
        {
            sum-=nums[l];
            l++;
            r++;
            sum+=nums[r];
            if(sum>0) ans=min(ans,sum);
        }
        return ans==INT_MAX?0:ans;
    }
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans=INT_MAX;
        for(int i=l;i<=r;i++)
        {
            int temp=func(nums,i);
            if(temp!=0)
            {
                ans=min(ans,temp);
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};