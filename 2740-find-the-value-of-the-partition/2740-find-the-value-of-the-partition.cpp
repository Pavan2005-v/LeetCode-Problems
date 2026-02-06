class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        for(int i=0;i<nums.size()-1;i++)
        {
            ans=min(nums[i+1]-nums[i],ans);
        }
        return ans;
    }
};