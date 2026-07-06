class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int l=0,r=0,count=0,len=INT_MAX;
        vector<string>temp;
        while(r<s.length())
        {
            if(s[r]=='1') count++;
            while(count==k)
            {
                len=min(len,r-l+1);
                temp.push_back(s.substr(l,r-l+1));
                if(s[l]=='1') count--;
                l++;
            }
            r++;
        }
        string ans="zyxwvutsrqponmlkjihgfedcba";
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i].length()==len)
            {
                if(ans>temp[i])
                {
                    ans=temp[i];
                }
            }
        }
        return len==INT_MAX?"":ans;
    }
};