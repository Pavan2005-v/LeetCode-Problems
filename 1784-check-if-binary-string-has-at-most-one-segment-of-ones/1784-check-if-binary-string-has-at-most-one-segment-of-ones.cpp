class Solution {
public:
    bool checkOnesSegment(string s) {
        int ind=s.length()-1;
        while(ind>0&&!(s[ind]&1))
        {
            ind--;
        }
        if(!s.length()) return false;
        while(ind>0&&(s[ind]&1))
        {
            ind--;
        }
        return ind==0;
    }
};