class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='*'&&!st.empty()) st.pop();
            else if(isalpha(s[i])) st.push(s[i]);
        }
        if(st.size()==0) return "";
        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};