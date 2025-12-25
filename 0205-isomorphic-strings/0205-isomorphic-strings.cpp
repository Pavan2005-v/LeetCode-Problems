class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mpp;
        unordered_map<char,char>mpp1;
        for(int i=0;i<s.length();i++)
        {
            mpp[s[i]]=t[i];
            mpp1[t[i]]=s[i];
        }
        for(int i=0;i<s.length();i++)
        {
            if(mpp[s[i]]!=t[i]) return false;
            else if(mpp1[t[i]]!=s[i]) return false;
        }
        return true;
    }
};