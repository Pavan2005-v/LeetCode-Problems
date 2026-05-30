class Solution {
public:
    string findValidPair(string s) {
        unordered_map<char,int>mpp;
        for(char c:s) mpp[c]++;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=s[i+1])
            {
                if(mpp[s[i]]==s[i]-'0'&&mpp[s[i+1]]==s[i+1]-'0')
                {
                    return s.substr(i,2);
                }
            }
        }
        return "";
    }
};