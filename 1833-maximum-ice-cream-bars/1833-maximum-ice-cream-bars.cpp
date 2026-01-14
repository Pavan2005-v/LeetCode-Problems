class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int count=0;
        int ans=0;
        for(int i:costs)
        {
            if(coins-i>=0)
            {
                ans++;
                coins-=i;
            }
        }
        return ans;
    }
};