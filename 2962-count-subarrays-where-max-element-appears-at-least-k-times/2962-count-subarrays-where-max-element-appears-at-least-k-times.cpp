class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i:nums)
        {
            maxi=max(i,maxi);
        }
        int l=0,r=0,count=0;
        long long ans=0;
        while(r<n)
        {
            if(nums[r]==maxi) count++;
            while(count>=k)
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