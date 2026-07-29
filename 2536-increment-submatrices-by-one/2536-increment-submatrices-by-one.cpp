class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& ops) {
        vector<vector<int>>ans(n,vector<int>(n));
        for(int i=0;i<ops.size();i++)
        {
            for(int j=ops[i][0];j<=ops[i][2];j++)
            {
                ans[j][ops[i][1]]+=1;
                if(ops[i][3]+1<n)
                {
                    ans[j][ops[i][3]+1]-=1;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                ans[i][j]+=ans[i][j-1];
            }
        }
        return ans;
    }
};