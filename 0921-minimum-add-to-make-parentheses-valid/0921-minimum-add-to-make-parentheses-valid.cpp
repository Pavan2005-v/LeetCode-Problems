class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.length();
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            if(st.empty()) st.push(s[i]);
            else
            {
                if(st.top()=='('&&s[i]==')') st.pop();
                else st.push(s[i]);
            }
        }
        return st.size();
    }
};