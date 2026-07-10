class Solution {
public:
    long long int func(vector<int>nums,int k)
    {
        int l=0,r=nums.size()-1;
        long long ans=0;
        while(l<r)
        {
            if(nums[l]+nums[r]>k)
            {
                r--;
            }
            else
            {
                ans+=(r-l);
                l++;
            }
        }
        return ans;
    }
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        return func(nums,upper)-func(nums,lower-1);
    }
};