class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count=0;
        int l=0,r=0,ans=0;
        while(r<nums.size())
        {
            if(nums[r]==0) count++;
            if(count>1)
            {
                if(nums[l]==0) count--;
                l++;
            }
            if(count<=1) ans=max(ans,r-l);
            r++;
        }
        return ans;
    }
};