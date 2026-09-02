class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        int n=nums.size();
        stack<long long>st;
        vector<long long>ans;
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push(nums[i]);
            }
            else
            {
                long long num=nums[i];
                while(!st.empty()&&st.top()==num)
                {
                    st.pop();
                    num=(long long)(num*2);
                }
                st.push(num);
            }
        }
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};