class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.length()<p.length()) return {};
        vector<int>a;
        vector<int>vec1(26);
        vector<int>vec2(26);
        for(char c:p) vec2[c-'a']++;
        for(int i=0;i<p.length();i++) vec1[s[i]-'a']++;
        int l=0,r=p.length()-1;
        if(vec1==vec2) a.push_back(0);
        while(r<s.length())
        {
            vec1[s[l]-'a']--;
            l++;
            r++;
            if(r<s.length()) vec1[s[r]-'a']++;
            if(vec1==vec2)
            {
                a.push_back(l);
            }
        }
        return a;
    }
};