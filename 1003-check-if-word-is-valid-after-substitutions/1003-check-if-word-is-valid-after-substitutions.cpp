class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='c')
            {
                if(!st.empty()&&st.top()=='b')
                {
                    st.pop();
                    if(!st.empty()&&st.top()=='a')
                    {
                        st.pop();
                    }
                    else return false;
                }
                else return false;
            }
            else
            {
                st.push(s[i]);
            }
        }
        return st.empty();
    }
};