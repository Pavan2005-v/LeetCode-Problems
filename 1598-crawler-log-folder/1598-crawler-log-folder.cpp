class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;
        for(string log:logs)
        {
            if(log=="../"&&!st.empty()) st.pop();
            else if(log=="./") continue;
            else if(log!="../")st.push(log);
        }
        return st.size();
    }
};