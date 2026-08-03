class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        int n=mat.size(),m=mat[0].size();
        vector<vector<int>>pref(n+1,vector<int>(m+1));
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                pref[i][j]=mat[i-1][j-1]+pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1];
            }
        }
        int l=1,r=min(n,m),ans=0;
        while(l<=r)
        {
            int size=(l+r)/2;
            bool a=false;
            for(int i=0;i<n-size+1;i++)
            {
                for(int j=0;j<m-size+1;j++)
                {
                    int ind1=size+i-1,ind2=size+j-1;
                    int sum=pref[ind1+1][ind2+1]-pref[ind1+1][j]-pref[i][ind2+1]+pref[i][j];
                    if(sum<=threshold)
                    {
                        a=true;
                        break;
                    }
                }
                if(a) break;
            }
            if(a)
            {
                ans=size;
                l=size+1;
            }
            else
            {
                r=size-1;
            }
        }
        return ans;
    }
};