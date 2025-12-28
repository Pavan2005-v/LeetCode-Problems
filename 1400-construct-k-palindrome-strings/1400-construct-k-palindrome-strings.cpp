class Solution {
public:
    bool canConstruct(string s, int k) {
        unordered_map<char,int>mpp;
        if(k>s.length()) return false;
        for(char c:s)
        {
            mpp[c]++;
        }
        int count=0;
        for(auto it:mpp)
        {
            if(it.second%2!=0)
            {
                count++;
            }
        }
        if(count>k) return false;
        else return true;
    }
};