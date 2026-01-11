class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++)
        {
            if(grid[i][0]==1)
            {
                for(int j=0;j<grid[i].size();j++)
                {
                    if(grid[i][j]==0) grid[i][j]=1;
                    else grid[i][j]=0;
                }
            }
        }
        for(int i=0;i<grid[0].size();i++)
        {
            int count1=0;
            int count0=0;
            for(int j=0;j<grid.size();j++)
            {
                if(grid[j][i]==0) count0++;
                else count1++;
            }
            if(count0>count1)
            {
                for(int j=0;j<grid.size();j++)
                {
                    if(grid[j][i]==0) grid[j][i]=1;
                    else grid[j][i]=0;
                }
            }
        }
        int sum=0;
        for(int i=0;i<grid.size();i++)
        {
            int size=grid[i].size()-1;
            int temp=0;
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1)
                {
                    temp+=(pow(2,size));
                }
                size--;
            }
            sum+=temp;
        }
        return sum;       
    }
};