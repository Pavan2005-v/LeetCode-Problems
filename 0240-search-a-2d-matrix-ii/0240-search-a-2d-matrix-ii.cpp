class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int st=matrix.size()-1;
        int en=0;
        while(st>=0&&en<matrix[0].size())
        {
            if(matrix[st][en]==target) return true;
            else if(matrix[st][en]>target) st--;
            else en++;
        }
        return false;
    }
};