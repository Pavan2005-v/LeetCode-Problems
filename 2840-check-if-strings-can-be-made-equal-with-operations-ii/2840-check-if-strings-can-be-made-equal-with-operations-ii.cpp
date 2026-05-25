class Solution {
public:
    bool checkStrings(string s1, string s2) {
        vector<int>even(26);
        vector<int>odd(26);
        for(int i=0;i<s1.length();i++)
        {
            if(i&1)
            {
                even[s1[i]-'a']++;
            }
            else odd[s1[i]-'a']++;
        }
        for(int i=0;i<s2.length();i++)
        {
            if(i&1)
            {
                even[s2[i]-'a']--;
            }
            else odd[s2[i]-'a']--;
        }
        for(int i:even)
        {
            if(i!=0) return false;
        }
        for(int i:odd) 
        {
            if(i!=0) return false;
        }
        return true;
    }
};