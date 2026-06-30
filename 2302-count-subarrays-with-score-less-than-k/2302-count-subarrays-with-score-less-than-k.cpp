class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long sum=0,ans=0;
        int l=0,r=0,n=nums.size();
        while(r<nums.size())
        {
            sum+=nums[r];
            int size=r-l+1;
            while((long long)sum*size>=k)
            {
                ans+=(n-r);
                sum-=nums[l];
                l++;
                size--;
            }
            r++;
        }
        return ((long long)n*(n+1)/2)-ans;
    }
};