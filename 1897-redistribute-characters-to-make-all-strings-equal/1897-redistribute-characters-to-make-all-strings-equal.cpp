class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int>mpp;
        for(string word:words)
        {
            for(char c:word) mpp[c]++;  
        }
        for(auto it:mpp)
        {
            if(it.second%words.size()!=0) return false;
        }
        return true;
    }
};