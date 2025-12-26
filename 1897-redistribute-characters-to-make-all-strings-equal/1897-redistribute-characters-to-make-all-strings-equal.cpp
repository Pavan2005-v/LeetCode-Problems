class Solution {
public:
    bool makeEqual(vector<string>& words) {
        if(words.size()==1) return true;
        unordered_map<char,int>mpp;
        int mini=INT_MAX;
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words[i].size();j++)
            {
                mpp[words[i][j]]++;
            }
        }
        for(auto it:mpp)
        {
            if(it.second%words.size()!=0) return false;
        }
        return true;
    }
};