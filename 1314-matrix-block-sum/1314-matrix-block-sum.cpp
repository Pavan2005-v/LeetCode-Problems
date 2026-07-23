class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        vector<vector<int>>temp,ans;
        for(int i=0;i<mat.size();i++)
        {
            int sum=0;
            vector<int>prefrow;
            for(int j=0;j<mat[i].size();j++)
            {
                sum+=mat[i][j];
                prefrow.push_back(sum);
            }
            temp.push_back(prefrow);
        }
        for(int i=0;i<mat.size();i++)
        {
            vector<int>rowsum;
            for(int j=0;j<mat[i].size();j++)
            {
                int r1=i-k;
                int r2=i+k;
                int c1=j-k;
                int c2=j+k;
                if(r1<0) r1=0;
                if(r2>=mat.size()) r2=mat.size()-1;
                if(c1<0) c1=0;
                if(c2>=mat[0].size()) c2=mat[0].size()-1;
                int sum=0;
                for(int l=r1;l<=r2;l++)
                {
                    if(c1==0)
                    {
                        sum+=(temp[l][c2]);
                    }
                    else
                    {
                        sum+=(temp[l][c2]-temp[l][c1-1]);
                    }
                }
                rowsum.push_back(sum);
            }
            ans.push_back(rowsum);
        }
        return ans;
    }
};