class Solution {
public:
    string removeOccurrences(string s, string part) {
        string s1="Hellow";
        s1.erase(1,2);
        int i=0;
        while(s.find(part)!=string::npos)
        {
            if(s.substr(i,part.length())==part)
            {
                s.erase(i,part.length());
                i=0;
            }
            else i++;
        }
        return s;
    }
};