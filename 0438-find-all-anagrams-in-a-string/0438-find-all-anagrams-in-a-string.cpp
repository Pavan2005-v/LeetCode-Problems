class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>temp(26);
        vector<int>a;
        for(char c:p) temp[c-'a']++;
        for(int i=0;i<s.length();i++)
        {
            if(p.contains(s[i]))
            {
                vector<int>t(26);
                for(int j=i;j<i+p.length();j++)
                {
                    if(j>=s.length()) break;
                    if(t[s[j]-'a']>temp[s[j]-'a']) break;
                    t[s[j]-'a']++;
                }
                if(t==temp) a.push_back(i);
            }
        }
        return a;
    }
};