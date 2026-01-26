class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                mini=min(mini,abs(nums[i]-nums[j]));
            }
        }
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]>nums[i]&&nums[j]-nums[i]==mini)
                {
                    ans.push_back({nums[i],nums[j]});
                }
            }
        }
        return ans;
    }
};