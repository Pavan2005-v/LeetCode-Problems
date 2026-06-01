class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int ans=0;
        sort(cost.rbegin(),cost.rend());
        for(int i=0;i<cost.size();i++)
        {
            if((i+1)%3!=0) ans+=cost[i];
        }
        return ans;
    }
};