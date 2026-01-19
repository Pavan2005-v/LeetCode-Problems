class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int>ans;
        map<int,vector<int>>mpp;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                mpp[i+j].push_back(mat[i][j]);
            }
        }
        for(auto it:mpp)
        {
            if(it.first%2!=0)
            {
                for(int i:it.second)
                {
                    ans.push_back(i);
                }
            }
            else
            {
                int size=it.second.size();
                for(int i=size-1;i>=0;i--) ans.push_back(it.second[i]);
            }
        }
        return ans;
    }
};