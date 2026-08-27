class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n=pushed.size(),ind=0;
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            st.push(pushed[i]);
            while(!st.empty()&&ind<n&&st.top()==popped[ind])
            {
                st.pop();
                ind++;
            }
        }
        return st.empty();
    }
};