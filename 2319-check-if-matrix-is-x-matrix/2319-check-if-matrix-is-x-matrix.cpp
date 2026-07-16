class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][i]==0) return false;
                else if(grid[i][n-i-1]==0) return false;
                else if(i!=j&&j!=n-i-1&&grid[i][j]!=0) return false;
            }
        } 
        return true;
    }
};