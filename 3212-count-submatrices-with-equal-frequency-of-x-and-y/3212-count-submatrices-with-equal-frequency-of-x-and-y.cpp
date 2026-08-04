class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int n=grid.size(),m=grid[0].size(),ans=0;
        vector<vector<int>>Xpref(n,vector<int>(m)),Ypref(n,vector<int>(m));
        if(grid[0][0]=='X') Xpref[0][0]=1;
        else if(grid[0][0]=='Y') Ypref[0][0]=1;
        for(int i=1;i<m;i++)
        {
            if(grid[0][i]=='X') 
            {
                Xpref[0][i]+=(Xpref[0][i-1]+1);
                Ypref[0][i]+=(Ypref[0][i-1]);
            }
            else if(grid[0][i]=='Y')
            {
                Xpref[0][i]+=(Xpref[0][i-1]);
                Ypref[0][i]+=(Ypref[0][i-1]+1);
            }
            else
            {
                Xpref[0][i]+=Xpref[0][i-1];
                Ypref[0][i]+=Ypref[0][i-1];
            }
        }
        for(int i=1;i<n;i++)
        {
            if(grid[i][0]=='X') 
            {
                Xpref[i][0]+=(Xpref[i-1][0]+1);
                Ypref[i][0]+=(Ypref[i-1][0]);
            }
            else if(grid[i][0]=='Y')
            {
                Xpref[i][0]+=(Xpref[i-1][0]);
                Ypref[i][0]+=(Ypref[i-1][0]+1);
            }
            else
            {
                Xpref[i][0]+=Xpref[i-1][0];
                Ypref[i][0]+=Ypref[i-1][0];
            }           
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                Xpref[i][j]=Xpref[i][j-1]+Xpref[i-1][j]-Xpref[i-1][j-1];
                Ypref[i][j]=Ypref[i][j-1]+Ypref[i-1][j]-Ypref[i-1][j-1];
                if(grid[i][j]=='Y') Ypref[i][j]++;
                else if(grid[i][j]=='X') Xpref[i][j]++;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(Xpref[i][j]!=0&&Xpref[i][j]==Ypref[i][j]) ans++;
            }
        }
        return ans;
    }
};