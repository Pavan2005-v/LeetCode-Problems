class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                vector<int>t;
                for(int k=0;k<grid.size();k++)
                {
                    t.push_back(grid[k][j]);
                }
                if(grid[i]==t) count++;
            }
        }
        return count;
    }
};