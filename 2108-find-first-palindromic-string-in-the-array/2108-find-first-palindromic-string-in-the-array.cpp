class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string w:words)
        {
            string s=w;
            reverse(w.begin(),w.end());
            if(s==w) return w;
        }
        return "";
    }
};