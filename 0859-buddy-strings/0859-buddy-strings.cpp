class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        vector<int>temp(26);
        for(char c:s) temp[c-'a']++;
        for(char c:goal) temp[c-'a']--;
        for(int i:temp)
        {
            if(i!=0) return false;
        }
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=goal[i]) count++;
            temp[s[i]-'a']++;
            if(count>2) return false;
        }
        if(!count)
        {
            for(int i:temp)
            {
                if(i>1) return true;
            }
            return false;
        }
        return true;
    }
};