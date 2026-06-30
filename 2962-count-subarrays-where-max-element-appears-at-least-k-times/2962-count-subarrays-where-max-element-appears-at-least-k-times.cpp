class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int l=0,r=0,maxi=0,count=0,n=nums.size();
        long long ans=0;
        for(int i:nums) maxi=max(maxi,i);
        while(r<nums.size())
        {
            if(nums[r]==maxi) count++;
            while(count==k)
            {
                ans+=(n-r);
                if(nums[l]==maxi) count--;
                l++;
            }
            r++;
        }
        return ans;
    }
};