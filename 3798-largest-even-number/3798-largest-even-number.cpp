class Solution {
public:
    string largestEven(string s) {
        int i=s.length()-1;
        while(i>=0&&(s[i]-'0')%2!=0)
        {
            s.erase(i);
            i--;
        }
        return s;
    }
};