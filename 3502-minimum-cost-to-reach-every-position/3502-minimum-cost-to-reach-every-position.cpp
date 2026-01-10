class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int>ans(cost.size());
        ans[0]=cost[0];
        for(int i=1;i<cost.size();i++)
        {
            ans[i]=min(ans[i-1],cost[i]);
        }
        return ans;
    }
};