class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.contains(part))
        {
            for(int i=0;i<s.length();i++)
            {
                if(s.substr(i,part.length())==part)
                {
                    s.erase(i,part.length());
                    break;
                }
            }
        }
        return s;
    }
};