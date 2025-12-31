class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int ans=0;
        vector<int>ps(nums.size());
        ps[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--)
        {
            ps[i]=max(ps[i+1],nums[i]);
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            ans=max(ans,ps[i]-nums[i]);
        }
        return ans;
    }
};