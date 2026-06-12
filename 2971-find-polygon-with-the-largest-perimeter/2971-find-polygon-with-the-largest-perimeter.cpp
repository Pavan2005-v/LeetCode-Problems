class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long int ans=0;
        long long int ans1=-1;
        for(int i=0;i<nums.size()-1;i++)
        {
            ans+=nums[i];
            if(ans>nums[i+1]&&i>=1)
            {
                ans1=max(ans1,ans)+nums[i+1];
            }
        }
        return ans1;
    }
};