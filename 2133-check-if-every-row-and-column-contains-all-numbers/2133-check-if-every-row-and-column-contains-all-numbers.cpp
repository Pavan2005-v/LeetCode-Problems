class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int num=INT_MIN;
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            num=max(num,matrix[0][i]);
        }
        if(n!=num) return false;
        for(int i=0;i<n;i++)
        {
            unordered_set<int>temp;
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]>num||matrix[i][j]==0) return false;
                temp.insert(matrix[i][j]);
            }
            if(temp.size()!=num) return false;
        }
        for(int i=0;i<n;i++)
        {
            unordered_set<int>temp;
            for(int j=0;j<n;j++)
            {
                temp.insert(matrix[j][i]);
            }
            if(temp.size()!=num) return false;
        }
        return true; 
    }
};