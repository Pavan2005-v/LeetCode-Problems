class Solution {
public:
    int largestMagicSquare(vector<vector<int>>& grid) {
        int ans=1;
        int n=grid.size(),m=grid[0].size();
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
                        int sum=0;
                        for(int l=j;l<=ind2;l++)
                        {
                            sum+=grid[k][l];
                        }
                        st.insert(sum);
                    }
                    for(int k=j;k<=ind2;k++)
                    {
                        int sum=0;
                        for(int l=i;l<=ind1;l++)
                        {
                            sum+=grid[l][k];
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