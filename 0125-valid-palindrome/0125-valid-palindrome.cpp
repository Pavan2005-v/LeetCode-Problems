class Solution {
public:
    bool isPalindrome(string s) {
        int l=0,r=s.length()-1;
        while(l<r)
        {
            if(!isalpha(s[l])&&!isdigit(s[l]))
            {
                l++;
            }
            if(!isalpha(s[r])&&!isdigit(s[r]))
            {
                r--;
            }
            if((isalpha(s[l])||isdigit(s[l]))&&((isalpha(s[r]))||isdigit(s[r])))
            {
                if(tolower(s[l])!=tolower(s[r])) return false;
                else l++; r--;
            }
        }
        return true;
    }
};