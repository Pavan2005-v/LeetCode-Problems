class Solution {
public:
    bool checkString(string s) {
        int index;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='b')
            {
                index=i;
                break;
            }
        }
        for(int i=index;i<s.length();i++)
        {
            if(s[i]=='a') return false;
        }
        return true;
    }
};