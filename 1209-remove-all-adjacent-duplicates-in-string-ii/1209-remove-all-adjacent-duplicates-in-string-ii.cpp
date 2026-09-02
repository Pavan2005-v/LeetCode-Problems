class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n=s.length();
        stack<pair<char,int>>st;
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push({s[i],1});
            }
            else
            {
                if(st.top().first==s[i])
                {
                    st.top().second++;
                    if(st.top().second==k)
                    {
                        st.pop();
                    }
                }
                else
                {
                    st.push({s[i],1});
                }
            }
        }
        while(!st.empty())
        {
            while(st.top().second>0)
            {
                ans+=st.top().first;
                st.top().second--;
            }
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};