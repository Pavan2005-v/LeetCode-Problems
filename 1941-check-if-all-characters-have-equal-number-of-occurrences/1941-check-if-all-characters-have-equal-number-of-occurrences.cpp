class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mpp;
        for(char c:s) mpp[c]++;
        int a=mpp[s[0]];
        for(auto it:mpp)
        {
            if(it.second!=a) return false;
        }
        return true;
    }
};