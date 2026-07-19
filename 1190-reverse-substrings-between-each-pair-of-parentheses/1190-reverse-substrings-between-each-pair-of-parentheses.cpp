class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=')') st.push(s[i]);
            else
            {
                string temp="";
                while(st.top()!='(')
                {
                    temp+=st.top();
                    st.pop();
                }
                st.pop();
                for(char c:temp)
                {
                    st.push(c);
                }
            }
        }
        string ans="";
        while(st.size()>0)
        {
            if(isalpha(st.top())) ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};