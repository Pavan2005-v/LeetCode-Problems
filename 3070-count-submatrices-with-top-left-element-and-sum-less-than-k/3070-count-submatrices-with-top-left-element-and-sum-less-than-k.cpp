class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int ans=0,n=grid.size(),m=grid[0].size();
        if(grid[0][0]<=k) ans++;
        for(int i=1;i<n;i++)
        {
            grid[i][0]+=grid[i-1][0];
            if(grid[i][0]<=k) ans++;
        }
        for(int i=1;i<m;i++)
        {
            grid[0][i]+=grid[0][i-1];
            if(grid[0][i]<=k) ans++;
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                grid[i][j]=grid[i][j]+grid[i-1][j]+grid[i][j-1]-grid[i-1][j-1];
                if(grid[i][j]<=k) ans++;
            }
        }
        return ans;
    }
};