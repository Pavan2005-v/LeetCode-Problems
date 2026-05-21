class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        s+=s;
        if(s.contains(goal)) return true;
        else return false;
    }
};