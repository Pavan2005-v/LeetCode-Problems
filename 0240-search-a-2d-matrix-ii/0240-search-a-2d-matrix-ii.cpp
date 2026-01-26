class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++)
        {
            int st=0;
            int en=matrix[i].size()-1;
            if((matrix[i][st]<=target)&&(matrix[i][en]>=target))
            {
                while(st<=en)
                {
                    int mid=st+(en-st)/2;
                    if(matrix[i][mid]==target) return true;
                    else if(matrix[i][mid]>target) en=mid-1;
                    else if(matrix[i][mid]<target) st=mid+1;
                }
            }
        }
        return false;
    }
};