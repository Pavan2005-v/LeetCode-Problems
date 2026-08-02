class Solution {
public:
    int largestMagicSquare(vector<vector<int>>& grid) {
        int ans=1;
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>rowSum(n,vector<int>(m)),colSum(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            rowSum[i][0]=grid[i][0];
            for(int j=1;j<m;j++)
            {
                rowSum[i][j]=grid[i][j]+rowSum[i][j-1];
            }
        }
        for(int i=0;i<m;i++)
        {
            colSum[0][i]=grid[0][i];
            for(int j=1;j<n;j++)
            {
                colSum[j][i]=grid[j][i]+colSum[j-1][i];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int ind1=i,ind2=j;
                while(ind1<n&&ind2<m)
                {
                    unordered_set<int>st;
                    for(int k=i;k<=ind1;k++)
                    {
                        int sum;
                        if(j==0)
                        {
                            sum=rowSum[k][ind2];
                        }
                        else
                        {
                            sum=rowSum[k][ind2]-rowSum[k][j-1];
                        }
                        st.insert(sum);
                    }
                    for(int k=j;k<=ind2;k++)
                    {
                        int sum;
                        if(i==0)
                        {
                            sum=colSum[ind1][k];
                        }
                        else
                        {
                            sum=colSum[ind1][k]-colSum[i-1][k];
                        }
                        st.insert(sum);
                    }
                    int t1=i,t2=j;
                    int sum=0;
                    while(t1<=ind1&&t2<=ind2)
                    {
                        sum+=grid[t1][t2];
                        t1++;
                        t2++;
                    }
                    st.insert(sum);
                    sum=0;
                    t1=i,t2=ind2;
                    while(t1<=ind1&&t2>=j)
                    {
                        sum+=grid[t1][t2];
                        t1++;
                        t2--;
                    }
                    st.insert(sum);
                    if(st.size()==1)
                    {
                        ans=max(ans,ind1-i+1);
                    }
                    ind1++;
                    ind2++;
                }
            }
        }
        return ans;
    }
};