class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        unordered_map<int,int>mpp;
        for(int i=0;i<arr.size();i++)
        {
            mpp[arr[i]]=i;
        }
        int ans=INT_MAX;
        for(int i=0;i<mat.size();i++)
        {
            int ind=INT_MIN;
            for(int j=0;j<mat[i].size();j++)
            {
                ind=max(ind,mpp[mat[i][j]]);
            }
            ans=min(ans,ind);
        }
        for(int i=0;i<mat[0].size();i++)
        {
            int ind=INT_MIN;
            for(int j=0;j<mat.size();j++)
            {
                ind=max(ind,mpp[mat[j][i]]);
            }
            ans=min(ans,ind);
        }
        return ans;
    }
};