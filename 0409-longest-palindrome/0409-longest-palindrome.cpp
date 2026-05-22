class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mpp;
        for(char c:s) mpp[c]++;
        int mark=0;
        int ans=0;
        for(auto it:mpp)
        {
            if(it.second&1)
            {
                ans+=(it.second-1);
                mark=1;
            }
            else ans+=it.second;
        }
        if(mark) ans++;
        return ans;
    }
};