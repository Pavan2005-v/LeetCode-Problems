class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int n=mat.size(),m=mat[0].size();
        vector<vector<int>>pref(n+1,vector<int>(m+1)),ans(n,vector<int>(m));
        for(int i=1;i<n+1;i++)
        {
            vector<int>temp(m+1);
            for(int j=1;j<m+1;j++)
            {
                temp[j]=temp[j-1]+mat[i-1][j-1]+pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1];
            }
            pref[i]=temp;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int r1=max(0,i-k);
                int r2=min(n-1,i+k);
                int c1=max(0,j-k);
                int c2=min(m-1,j+k);
                ans[i][j]=pref[r2+1][c2+1]-pref[r1][c2+1]-pref[r2+1][c1]+pref[r1][c1];
            }
        }
        return ans;
    }
};