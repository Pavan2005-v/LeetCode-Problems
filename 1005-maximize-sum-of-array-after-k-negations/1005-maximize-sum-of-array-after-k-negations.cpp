class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0&&k>0)
            {
                nums[i]=abs(nums[i]);
                k--;
            }
        }
        sort(nums.begin(),nums.end());
        while(k>0)
        {
            nums[0]=-nums[0];
            k--;
        }
        for(int i:nums) ans+=i;
        return ans;

    }
};