class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n=s.length();
        stack<pair<char,int>>st;
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(s[i]=='('||s[i]==')')
            {
                if(st.empty())
                {
                    st.push({s[i],i});
                }
                else
                {
                    if(st.top().first=='('&&s[i]==')')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push({s[i],i});
                    }
                }
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(!st.empty()&&st.top().second==i)
            {
                st.pop();
            }
            else
            {
                ans+=s[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};