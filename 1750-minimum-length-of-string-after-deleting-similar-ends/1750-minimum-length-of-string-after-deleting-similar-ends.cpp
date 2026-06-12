class Solution {
public:
    int minimumLength(string s) {
        int l=0,r=s.length()-1;
        while(l<r)
        {
            if(s[l]!=s[r])
            {
                break;
            }
            while(r>=0&&s[l]==s[r])
            {
                r--;
            }
            r++;
            while(l<s.length()&&s[l]==s[r])
            {
                l++;
            }
            r--;
        }
        if(r-l+1<0) return 0;
        return r-l+1;
    }
};