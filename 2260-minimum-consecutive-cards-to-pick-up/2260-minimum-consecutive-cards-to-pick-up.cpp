class Solution {
public:
    int minimumCardPickup(vector<int>& nums) {
        int l=0,r=0,ans=INT_MAX;
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            if(mpp.contains(nums[i]))
            {
                ans=min(ans,i-mpp[nums[i]]+1);
            }
            mpp[nums[i]]=i;
        }
        return (ans!=INT_MAX)?ans:-1;
    }
};