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
        int size=ans.length();
        for(int i=0;i<ans.length()/2;i++)
        {
            swap(ans[i],ans[size-i-1]);
        }
        return ans;
    }
};