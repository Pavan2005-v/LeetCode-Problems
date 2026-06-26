class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,count=0,ans=0;
        while(r<nums.size())
        {
            if(nums[r]==0) count++;
            if(count>k)
            {
                if(nums[l]==0) count--;
                l++;
            }
            if(count<=k) ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};