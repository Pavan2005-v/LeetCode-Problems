class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int count=0;
        long long int sum=0;
        vector<int>temp;
        long long int mini=INT_MAX;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]<=0)
                {
                    count++;
                    temp.push_back(matrix[i][j]);
                }
                if(abs(matrix[i][j])<mini)
                {
                    mini=abs(matrix[i][j]);
                }
                sum+=abs(matrix[i][j]);
            }
        }
        if(count%2==0)
        {
            return sum;
        }
        else
        {
            sum-=(2*mini);
            return sum;
        }
    }
};