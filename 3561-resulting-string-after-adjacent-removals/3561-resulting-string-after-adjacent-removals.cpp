class Solution {
public:
    string resultingString(string s) {
        int n=s.length();
        stack<char>st;
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(st.empty()) st.push(s[i]);
            else
            {
                if(abs(st.top()-s[i])==1||abs(st.top()-s[i])==25) st.pop();
                else st.push(s[i]);
            }
        }
        while(!st.empty())
        {
            ans+=(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};