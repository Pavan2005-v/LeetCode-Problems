class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char> s1(s.begin(),s.end());
        return s1.size();
    }
};