class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n=encoded.size();
        vector<int>ans={first};
        for(int i=0;i<n;i++)
        {
            ans.push_back(encoded[i]^ans[i]);
        }
        return ans;
    }
};