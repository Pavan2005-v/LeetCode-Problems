class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mpp;
        for(string &s:strs)
        {
            string k=s;
            sort(k.begin(),k.end());
            mpp[k].push_back(s);
        }
        for(auto it:mpp)
        {
            ans.push_back(it.second);
        }
        return ans;
        
    }
};