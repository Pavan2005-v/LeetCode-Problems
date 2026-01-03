class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int c=0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                c++;
                if(c==k) return matrix[i][j];
            }
        }
        return -1;
    }
};