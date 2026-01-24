class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=INT_MIN;
        int c=nums.size()-1;
        for(int i=0;i<nums.size()/2;i++)
        {
            ans=max(ans,nums[i]+nums[c]);
            c--;
        }
        return ans;
    }
};