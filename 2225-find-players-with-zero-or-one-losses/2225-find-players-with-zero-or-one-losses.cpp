class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>mpp1;
        map<int,int>mpp2;
        for(int i=0;i<matches.size();i++)
        {
            mpp1[matches[i][0]]++;
            mpp2[matches[i][1]]++;
        }
        vector<int>temp;
        for(auto it:mpp1)
        {
            if(!mpp2.contains(it.first))
            {
                temp.push_back(it.first);
            }
        }
        vector<vector<int>>ans;
        ans.push_back(temp);
        temp.clear();
        for(auto it:mpp2)
        {
            if(it.second==1)
            {
                temp.push_back(it.first);
            }
        }
        ans.push_back(temp);
        return ans;
    }
};