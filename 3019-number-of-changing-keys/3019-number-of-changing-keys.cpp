class Solution {
public:
    int countKeyChanges(string s) {
        for(int i=0;i<s.length();i++)
        {
            if(islower(s[i]))
            {
                s[i]=toupper(s[i]);
            }
        }
        int i=0;
        int j=1;
        int count=0;
        while(j<s.length())
        {
            if(s[i]!=s[j]) count++;
            i++;
            j++;
        }
        return count;
    }
};