class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;
        vector<int>temp(26);
        for(char c:s1) 
        {
            temp[c-'a']++;
        }
        vector<int>t(26);
        for(int i=0;i<s1.length();i++)
        {
            t[s2[i]-'a']++;
        }
        if(t==temp) return true;
        int l=0,r=s1.length()-1;
        while(r<s2.length())
        {
            t[s2[l]-'a']--;
            l++;
            r++;
            if(r<s2.length()) t[s2[r]-'a']++;
            if(t==temp) return true;
        }
        return false;
    }
};