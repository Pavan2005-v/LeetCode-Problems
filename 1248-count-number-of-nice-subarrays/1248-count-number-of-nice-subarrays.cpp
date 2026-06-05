class Solution {
public:
    int func(vector<int>nums,int k)
    {
        if(k<0) return 0;
        int count=0,l=0,r=0,ans=0;
        while(r<nums.size())
        {
            if(nums[r]&1) count++;
            while(count>k)
            {
                if(nums[l]&1) count--;
                l++;
            }
            ans+=(r-l+1);
            r++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return func(nums,k)-func(nums,k-1);
    }
};