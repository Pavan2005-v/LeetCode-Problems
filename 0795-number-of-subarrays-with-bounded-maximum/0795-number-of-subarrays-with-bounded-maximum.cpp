class Solution {
public:
    int func(vector<int>nums,int k)
    {
        if(k<0) return 0;
        int l=0,r=0,count=0;
        while(r<nums.size())
        {
            while(r<nums.size()&&nums[r]>k)
            {
                l=r+1;
                r=l;
            }
            if(r<nums.size()&&nums[r]<=k)
            {
                count+=(r-l+1);
            }
            r++;
        }
        return count;
    }
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return func(nums,right)-func(nums,left-1);
    }
};