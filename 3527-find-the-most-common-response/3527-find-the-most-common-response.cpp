class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        unordered_map<string,int>mpp;
        for(int i=0;i<responses.size();i++)
        {
            unordered_set<string>s(responses[i].begin(),responses[i].end());
            for(string s1:s)
            {
                mpp[s1]++;
            }
        }
        int maxi=INT_MIN;
        for(auto it:mpp)
        {
            maxi=max(maxi,it.second);
        }
        vector<string>ans;
        for(auto it:mpp)
        {
            if(it.second==maxi) ans.push_back(it.first);
        }
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};