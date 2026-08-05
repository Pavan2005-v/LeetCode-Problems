class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size(),ans=0;
        long long sum=0,count=0;
        for(int i:nums) sum+=i;
        for(int i=0;i<n-1;i++)
        {
            count+=nums[i];
            if(count>=sum-count)
            {
                ans++;
            }
        }
        return ans;
    }
};