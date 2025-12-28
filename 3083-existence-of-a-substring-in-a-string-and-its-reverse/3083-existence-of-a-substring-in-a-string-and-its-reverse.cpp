class Solution {
public:
    bool isSubstringPresent(string s) {
        string orgi=s;
        reverse(s.begin(),s.end());
        for(int i=1;i<orgi.length();i++)
        {
            string t="";
            t+=orgi[i-1];
            t+=orgi[i];
            if(s.contains(t)) return true;
        }
        return false;
    }
};