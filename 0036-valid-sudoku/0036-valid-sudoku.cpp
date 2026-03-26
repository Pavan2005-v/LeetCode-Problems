class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
        {
            unordered_map<char,int>mpp;
            for(int j=0;j<9;j++)
            {
                if(isdigit(board[i][j]))
                {
                    mpp[board[i][j]]++;
                }
            }
            for(auto it:mpp)
            {
                if(it.second>1) return false;
            }
        }
        for(int i=0;i<9;i++)
        {
            unordered_map<char,int>mpp;
            for(int j=0;j<9;j++)
            {
                if(isdigit(board[j][i]))
                {
                    mpp[board[j][i]]++;
                }
            }
            for(auto it:mpp)
            {
                if(it.second>1) return false;
            }
        }
        for(int i=0;i<9;i+=3)
        {
            for(int j=0;j<9;j+=3)
            {
                unordered_map<char,int>mpp;
                for(int k=0;k<3;k++)
                {
                    for(int l=0;l<3;l++)
                    {
                        if(isdigit(board[k+i][j+l]))
                        {
                            mpp[board[k+i][j+l]]++;
                        }
                    }
                }
                for(auto it:mpp)
                {
                    if(it.second>1) return false;
                }
            }
        }
        return true;
    }
};