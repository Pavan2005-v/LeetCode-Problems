class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string ans1="";
        string ans2="";
        for(string s:word1) ans1+=s;
        for(string s:word2) ans2+=s;
        return ans1==ans2;
    }
};
