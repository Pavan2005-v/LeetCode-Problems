class Solution {
public:
    bool isPalindrome(string s)
    {
        int i=0;
        int j=s.length()-1;
        while(i<j)
        {
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            string temp="";
            for(int j=i;j<s.length();j++)
            {
                temp+=s[j];
                if(isPalindrome(temp)) count++;
            }
        }
        return count;
        
    }
};