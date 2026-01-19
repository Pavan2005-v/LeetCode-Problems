class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        map<int,vector<int>>mpp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                mpp[i+j].push_back(nums[i][j]);
            }
        }
        for(auto it:mpp)
        {
            for(int i=it.second.size()-1;i>=0;i--)
            {
                ans.push_back(it.second[i]);
            }
        }
        return ans;
    }
};