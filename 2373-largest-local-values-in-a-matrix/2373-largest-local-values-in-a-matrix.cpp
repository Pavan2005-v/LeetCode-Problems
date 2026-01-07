class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>>ans;
        for(int i=0;i<grid.size();i++)
        {
            vector<int>temp;
            if(i+3<=grid[0].size())
            {
                for(int j=0;j<grid[0].size();j++)
                {
                    if(j+3<=grid.size())
                    {
                        int maxi=INT_MIN;
                        for(int k=i;k<i+3;k++)
                        {
                            for(int l=j;l<j+3;l++) maxi=max(maxi,grid[k][l]);
                        }
                        temp.push_back(maxi);
                    }
                    else continue;
                }
            }
            if(temp.size()>0) ans.push_back(temp);
            else continue;
        }
        return ans;
    }
};