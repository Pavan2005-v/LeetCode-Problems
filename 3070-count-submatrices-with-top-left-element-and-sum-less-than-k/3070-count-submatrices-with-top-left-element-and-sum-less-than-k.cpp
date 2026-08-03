class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int ans=0,n=grid.size(),m=grid[0].size();
        vector<vector<int>>pref(n+1,vector<int>(m+1));
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                pref[i][j]=grid[i-1][j-1]+pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1];
                if(pref[i][j]<=k) ans++;
            }
        }
        return ans;
    }
};