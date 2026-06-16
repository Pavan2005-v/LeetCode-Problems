class Solution {
public:
    string processStr(string s) {
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            int n=ans.length();
            if(s[i]>='a'&&s[i]<='z') ans+=s[i];
            else if(n!=0)
            {
                if(s[i]=='*')
                {
                    ans.pop_back();
                }
                else if(s[i]=='#')
                {
                    ans+=ans;
                }
                else if(s[i]=='%')
                {
                    reverse(ans.begin(),ans.end());
                }
            }
        }
        return ans;
    }
};