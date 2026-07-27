class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        int n=matrix.size(),m=matrix[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1));
        vector<int>ans;
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                dp[i][j]=matrix[i-1][j-1]^dp[i-1][j]^dp[i][j-1]^dp[i-1][j-1];
            }
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                ans.push_back(dp[i][j]);
            }
        }
        sort(ans.rbegin(),ans.rend());
        return ans[k-1];
    }
};