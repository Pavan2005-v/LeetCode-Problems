class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.length();i++)
        {
            if(isalpha(s[i])||isdigit(s[i]))
            {
                temp+=(tolower(s[i]));
            }
        }
        int l=0,r=temp.length()-1;
        while(l<r)
        {
            if(temp[l]!=temp[r]) return false;
            else
            {
                l++; r--;
            }
        }
        return true;
    }
};