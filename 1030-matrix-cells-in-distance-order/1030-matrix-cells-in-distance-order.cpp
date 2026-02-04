class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rC, int cC) {
        vector<vector<int>>ans;
        vector<pair<int,vector<int>>>vp;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                vp.push_back({abs(rC-i)+abs(cC-j),{i,j}});
            }
        }
        sort(vp.begin(),vp.end());
        for(auto it:vp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};