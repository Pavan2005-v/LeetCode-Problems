class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sum=0;
        for(int i:nums) sum+=i;
        int rsum=nums[0];
        vector<int>ans;
        ans.push_back(sum-nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            ans.push_back(abs(rsum-(sum-rsum-nums[i])));
            rsum+=nums[i];
        }
        return ans;
    }
};