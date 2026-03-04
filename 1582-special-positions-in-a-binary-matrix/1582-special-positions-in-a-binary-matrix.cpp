class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ans=0;
        for(int i=0;i<mat.size();i++)
        {
            int count=0;
            int ind;
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j])
                {
                    count++;
                    ind=j;
                }
            }
            if(count==1)
            {
                for(int k=0;k<mat.size();k++)
                {
                    if(mat[k][ind]) count--;
                }
                if(count==0) ans++;
            }
        }
        return ans;
    }
};