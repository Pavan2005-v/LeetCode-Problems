class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>>dp(n,vector<int>(n));
        for(int i=0;i<queries.size();i++)
        {
            int r1=queries[i][0];
            int c1=queries[i][1];
            int r2=queries[i][2];
            int c2=queries[i][3];
            dp[r1][c1]+=1;
            if(c2+1<n) dp[r1][c2+1]-=1;
            if(r2+1<n)
            {
                dp[r2+1][c1]-=1;
                if(c2+1<n) dp[r2+1][c2+1]+=1;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                dp[i][j]+=dp[i][j-1];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                dp[j][i]+=dp[j-1][i];
            }
        }
        return dp;
    }
};