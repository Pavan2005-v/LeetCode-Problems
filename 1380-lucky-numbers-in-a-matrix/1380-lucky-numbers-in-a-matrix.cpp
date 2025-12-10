class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> rowMax;
        int maxi;
        for(int i=0;i<matrix.size();i++)
        {    
            maxi=*min_element(matrix[i].begin(),matrix[i].end());
            rowMax.push_back(maxi);
        }
        for(int i=0;i<matrix[0].size();i++)
        {
            maxi=0;
            for(int j=0;j<matrix.size();j++)
            {
                maxi=max(maxi,matrix[j][i]);
            }
            rowMax.push_back(maxi);
        }
        unordered_map<int,int>mpp;
        for(int i:rowMax) mpp[i]++;
        vector<int>ans;
        for(auto it:mpp)
        {
            if(it.second==2) ans.push_back(it.first);
        }
        return ans;
    }
};