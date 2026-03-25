class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        long long int tot=0;
        for(auto it:grid)
        {
            
            for(int i:it)
            {
                tot+=i;
            }
        }
        long long int sum=0;
        for(auto it:grid)
        {
            for(int i:it) 
            {
                sum+=i;
                if(sum>tot) break;
            }
            if(tot-sum==sum) return true; 
        }
        sum=0;
        for(int i=0;i<grid[0].size();i++)
        {
            for(int j=0;j<grid.size();j++)
            {
                sum+=grid[j][i];
                if(sum>tot) break;
            }
            if(tot-sum==sum) return true;  
        }
        return false;
    }
};