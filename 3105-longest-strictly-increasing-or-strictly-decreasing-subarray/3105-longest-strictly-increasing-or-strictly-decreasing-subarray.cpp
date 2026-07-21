class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans=0,temp=nums[0],count1=1,count2=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>temp)
            {
                count1++;
            }
            else
            {
                ans=max(ans,count1);
                count1=1;
            }
            if(nums[i]<temp)
            {
                count2++;
            }
            else
            {
                ans=max(ans,count2);
                count2=1;
            }
            temp=nums[i];
        }
        ans=max(ans,max(count2,count1));
        return ans;
    }
};