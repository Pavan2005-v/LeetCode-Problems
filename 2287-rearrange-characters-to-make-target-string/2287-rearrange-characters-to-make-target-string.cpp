class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        int ans=INT_MAX;
        unordered_map<char,int>mpp1;
        unordered_map<char,int>mpp2;
        for(char c:target) mpp2[c]++;
        for(char c:s)
        {
            if(mpp2.contains(c)) mpp1[c]++;
        }
        for(auto it:mpp2)
        {
            if(it.second>mpp1[it.first]) return 0;
        }
        for(auto it:mpp1)
        {
            ans=min(ans,it.second/mpp2[it.first]);
        }
        return ans;
    }
};