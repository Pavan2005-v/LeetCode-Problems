class Solution {
public:
    int numberOfSubstrings(string s) {
        int l=0,r=0;
        unordered_map<char,int>mpp;
        int ans=0;
        while(r<s.length())
        {
            mpp[s[r]]=r;
            if(mpp.size()==3)
            {
                ans+=(min({mpp['a'],mpp['b'],mpp['c']})+1);
            }
            r++;
        }
        return ans;
    }
};