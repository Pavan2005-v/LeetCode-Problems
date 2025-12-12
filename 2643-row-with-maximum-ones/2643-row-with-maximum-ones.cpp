class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans;
        int maxi=INT_MIN;
        int index;
        for(int i=0;i<mat.size();i++)
        {
            int count=0;
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==1) count++;
            }
            if(count>maxi)
            {
                maxi=count;
                index=i;
            }
        }
        ans.push_back(index);
        ans.push_back(maxi);
        return ans;
    }
};