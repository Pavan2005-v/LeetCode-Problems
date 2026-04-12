class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int>ans;
        for(int i=0;i<matrix.size();i++)
        {
            int count=0;
            for(int j=0;j<matrix[i].size();j++)
            {
                count+=matrix[i][j];
            }
            ans.push_back(count);
        }
        return ans;
    }
};