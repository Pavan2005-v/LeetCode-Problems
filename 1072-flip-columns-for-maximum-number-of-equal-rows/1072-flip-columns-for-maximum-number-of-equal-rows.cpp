class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        int ans=0;
        for(int i=0;i<matrix.size();i++)
        {
            vector<int>temp1=matrix[i];
            vector<int>temp2;
            for(int k=0;k<matrix[i].size();k++)
            {
                if(matrix[i][k]==0) temp2.push_back(1);
                else temp2.push_back(0);
            }
            int count=0;
            for(int j=0;j<matrix.size();j++)
            {
                if(matrix[j]==temp1||matrix[j]==temp2) count++;
            }
            ans=max(ans,count);
        }
        return ans;
    }
};