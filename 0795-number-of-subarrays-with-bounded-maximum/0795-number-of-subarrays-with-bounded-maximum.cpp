class Solution {
public:
    int func(vector<int>nums,int ele)
    {
        if(ele<0) return 0;
        int ans=0;
        int l=0,r=0;
        while(r<nums.size()&&l<nums.size())
        {
            int k=0;
            while(r<nums.size()&&nums[r]<=ele)
            {
                r++;
                k=1;
            }
            if(k)
            {
                r--;
                long long int num=r-l+1;
                num=(num*(num+1))/2;
                ans+=(num);
                r+=2;
                l=r;
            }
            else
            {
                r++;
                l++;
            }
        }
        return ans;
    }
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return func(nums,right)-func(nums,left-1);
    }
};