class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        unordered_map<int,vector<int>>mpp;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                mpp[i+j].push_back(mat[i][j]);
            }
        }
        vector<int>ans;
        int size=mpp.size();
        for(int i=0;i<size;i++)
        {
            if(i&1)
            {
                for(int j=0;j<mpp[i].size();j++)
                {
                    ans.push_back(mpp[i][j]);
                }
            }
            else
            {
                for(int j=mpp[i].size()-1;j>=0;j--)
                {
                    ans.push_back(mpp[i][j]);
                }
            }
        }
        return ans;
    }
};