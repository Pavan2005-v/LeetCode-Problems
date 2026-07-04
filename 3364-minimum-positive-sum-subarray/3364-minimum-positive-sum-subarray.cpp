class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int minSize, int maxSize) {
        int ans=INT_MAX;
        for(int len=minSize;len<=maxSize;len++)
        {
            int sum=0;
            for(int i=0;i<len;i++) sum+=nums[i];
            int l=0,r=len-1;
            if(sum>0) ans=min(ans,sum);
            while(r<nums.size()-1)
            {
                sum-=nums[l];
                l++;
                r++;
                sum+=nums[r];
                if(sum>0) ans=min(ans,sum);
            }
        }
        return (ans!=INT_MAX)?ans:-1;
    }
};