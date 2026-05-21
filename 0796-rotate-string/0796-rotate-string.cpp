class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        int it=0;
        while(it<s.length())
        {
            s+=s[0];
            s.erase(0,1);
            if(s==goal) return true;
            it++;
        }
        return false;
    }
};