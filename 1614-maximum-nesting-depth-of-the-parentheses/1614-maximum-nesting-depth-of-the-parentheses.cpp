class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int depth=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
                int a=st.size();
                depth=max(depth,a);
            }
            else if(s[i]==')') st.pop();
        }
        return depth;
    }
};