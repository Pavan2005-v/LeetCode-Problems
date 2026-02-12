class Solution {
public:
    long long maximumHappinessSum(vector<int>& nums, int k) {
        long long ans=0;
        sort(nums.begin(),nums.end(),greater<int>());
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(k>0&&nums[i]-c>0)
            {
                ans+=(nums[i]-c);
                k--;
            }
            else break;
            c++;
        }
        return ans;
    }
};