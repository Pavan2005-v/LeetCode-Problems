class Solution {
public:
    string longestPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            int l=i,r=i;
            while(l>=0&&r<s.length())
            {
                if(s[l]==s[r])
                {
                    l--;
                    r++;
                }
                else
                {
                    break;
                }
            }
            l++;
            r--;
            string temp=s.substr(l,r-l+1);
            if(ans.length()<temp.length())
            {
                ans=temp;
            }
            l=i,r=i+1;
            while(l>=0&&r<s.length())
            {
                if(s[l]==s[r])
                {
                    l--;
                    r++;
                }
                else
                {
                    break;
                }
            }
            l++;
            r--;
            temp=s.substr(l,r-l+1);
            if(ans.length()<temp.length())
            {
                ans=temp;
            }
        }
        return ans;
    }
};