class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            if(i+2<grid.size())
            {
                for(int j=0;j<grid[i].size();j++)
                {
                    if(j+2<grid[i].size())
                    {
                        ans=max(ans,grid[i][j]+grid[i][j+1]+grid[i][j+2]+grid[i+1][j+1]+grid[i+2][j]+grid[i+2][j+1]+grid[i+2][j+2]);
                    }
                }
            }
        }
        return ans;
    }
};