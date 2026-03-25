class Solution {
public:
    #define ll long long int
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<ll>rowSum(n,0);
        vector<ll>colSum(m,0);
        ll tot=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                rowSum[i]+=grid[i][j];
                colSum[j]+=grid[i][j];
                tot+=grid[i][j];
            }
        }
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=rowSum[i];
            if(tot-sum==sum) return true;
            if(sum>tot) break;
        }
        sum=0;
        for(int i=0;i<m;i++)
        {
            sum+=colSum[i];
            if(tot-sum==sum) return true;
            if(sum>tot) break;
        }
        return false;
    }
};