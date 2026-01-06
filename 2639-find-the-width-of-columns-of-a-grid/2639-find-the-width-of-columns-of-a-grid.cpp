class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        if(grid.size()==1)
        {
            vector<int>ans1;
            int mino=INT_MIN;
            for(int i=0;i<grid[0].size();i++)
            {
                int leng;
                int num=grid[0][i];
                if(num>=0)
                {
                    if(num==0)leng=1;
                    else leng=log10(num)+1;
                }
                else
                {
                    num=-num;
                    leng=log10(num)+2;
                }
                mino=max(mino,leng);
                ans1.push_back(mino);
            }
            return ans1;
        }
        vector<int>ans;
        for(int i=0;i<grid[0].size();i++)
        {
            int mini=INT_MIN;
            for(int j=0;j<grid.size();j++)
            {
                int leng;
                if(grid[j][i]>=0)
                {
                    if(grid[j][i]==0) leng=1;
                    else leng=log10(grid[j][i])+1;
                }
                else
                {
                    int temp=-(grid[j][i]);
                    leng=log10(temp)+2;
                }
                mini=max(mini,leng);
            }
            ans.push_back(mini);
        }
        return ans;
    }
};