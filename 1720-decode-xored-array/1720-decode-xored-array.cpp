class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>ans;
        ans.push_back(first);
        for(int i=0;i<encoded.size();i++)
        {
            int k=encoded[i]^ans[ans.size()-1];
            ans.push_back(k);
        }
        return ans;
    }
};