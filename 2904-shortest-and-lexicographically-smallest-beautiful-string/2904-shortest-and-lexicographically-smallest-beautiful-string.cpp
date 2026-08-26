class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.length(),l=0,r=0,len=INT_MAX,count=0;
        string ans="zyxwvutsrqponmlkjihgfedcba";
        while(r<n)
        {
            if(s[r]=='1')
            {
                count++;
            }
            while(count==k)
            {
                if(r-l+1<len)
                {
                    len=r-l+1;
                    ans=s.substr(l,r-l+1);
                }
                if(r-l+1==len)
                {
                    ans=min(ans,s.substr(l,r-l+1));
                }
                if(s[l]=='1') count--;
                l++;
            }
            r++;
        }
        return len==INT_MAX?"":ans;
    }
};