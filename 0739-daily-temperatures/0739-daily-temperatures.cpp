class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        int n=nums.size();
        stack<int>st;
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            while(!st.empty()&&nums[st.top()]<nums[i])
            {
                ans[st.top()]=i-st.top();
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};