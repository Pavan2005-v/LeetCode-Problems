class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long sum=0,ans=-1;
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            sum+=nums[i];
            if(sum>nums[i+1])
            {
                ans=sum+nums[i+1];
            }
        }
        return ans;
    }
};