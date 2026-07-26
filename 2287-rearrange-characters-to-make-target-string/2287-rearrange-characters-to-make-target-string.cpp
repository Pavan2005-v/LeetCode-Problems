class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>mpp,mpp1;
        for(char c:s) mpp[c]++;
        for(char c:target) mpp1[c]++;
        int ans=INT_MAX;
        for(auto it:mpp1)
        {
            ans=min(ans,mpp[it.first]/mpp1[it.first]);
        }
        return ans==INT_MAX?0:ans;
    }
};