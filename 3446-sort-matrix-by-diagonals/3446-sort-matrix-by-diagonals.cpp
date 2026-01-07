class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        //vector<vector<int>>ans(grid.size(),vector<int>(grid[0].size()));
        unordered_map<int,vector<int>>mpp;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                mpp[i-j].push_back(grid[i][j]);
            }
        }
        for(auto &it:mpp)
        {
            if(it.first<0)
            {
                sort(it.second.rbegin(),it.second.rend());
            }
            else
            {
                sort(it.second.begin(),it.second.end());
            }
        }
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                grid[i][j]=mpp[i-j].back();
                mpp[i-j].pop_back();
            }
        }
        return grid;
    }
};