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
        unordered_set<int>stt;
        while(!st.empty())
        {
            stt.insert(st.top().second);
            st.pop();
        }
        for(int i=0;i<n;i++)
        {
            if(!stt.contains(i))
            {
                ans+=s[i];
            }
        }
        return ans;
    }
};