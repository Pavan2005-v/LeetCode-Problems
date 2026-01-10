class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int>st;
        int c=1;
        int index=0;
        vector<string>ans;
        while((index<target.size())&&(c<=n)&&(target.size()!=st.size()))
        {
            if(target[index]==c)
            {
                st.push(c);
                ans.push_back("Push");
                index++;
            }
            else
            {
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            c++;
        }
        return ans;
    }
};