class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;
        vector<int>temp1(26),temp2(26);
        for(char c:s1) temp2[c-'a']++;
        for(int i=0;i<s1.length();i++)
        {
            temp1[s2[i]-'a']++;
        }
        if(temp1==temp2) return true;
        int l=0,r=s1.length()-1;
        while(r<s2.length()-1)
        {
            temp1[s2[l]-'a']--;
            l++;
            r++;
            temp1[s2[r]-'a']++;
            if(temp1==temp2) return true;
        }
        return false;
    }
};