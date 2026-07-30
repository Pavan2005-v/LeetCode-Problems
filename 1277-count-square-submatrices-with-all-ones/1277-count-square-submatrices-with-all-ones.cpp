class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int ans=0,n=matrix.size(),m=matrix[0].size();
        vector<vector<int>>pref(n+1,vector<int>(m+1));
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                pref[i][j]=matrix[i-1][j-1]+pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int ind1=i,ind2=j,i1=i,j1=j;
                while(i1<n&&j1<m)
                {
                    int expSum=(i1-i+1)*(j1-j+1);
                    int actSum=pref[i1+1][j1+1]-pref[i1+1][ind2]-pref[ind1][j1+1]+pref[ind1][ind2];
                    if(expSum==actSum) ans++;
                    else break;
                    i1++;
                    j1++;
                }
            }
        }
        return ans;
    }
};