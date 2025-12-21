class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<int>temp;
        for(int i=0;i<score.size();i++)
        {
            temp.push_back(score[i][k]);
        }
        sort(temp.rbegin(),temp.rend());
        for(int i:temp)cout<<i<<" ";
        vector<vector<int>>ans;
        int j=0;
        while(j<temp.size())
        {
            for(int i=0;i<score.size();i++)
            {
                if(score[i][k]==temp[j])
                {
                    ans.push_back(score[i]);
                    j++;
                    break;
                }
            }            
        }
        return ans;
    }
};