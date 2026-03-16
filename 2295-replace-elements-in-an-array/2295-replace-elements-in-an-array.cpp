class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& temp) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]=i;
        }
        for(int i=0;i<temp.size();i++)
        {
            nums[mpp[temp[i][0]]]=temp[i][1];
            mpp[temp[i][1]]=mpp[temp[i][0]];
        }
        return nums;
    }
};