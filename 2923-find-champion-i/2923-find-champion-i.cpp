class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int maxi=INT_MIN;
        int index;
        for(int i=0;i<grid.size();i++)
        {
            int count=0;
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1)
                {
                    count++;
                }
            }
            if(count>maxi)
            {
                maxi=count;
                index=i;
            }
        }
        return index;        
    }
};