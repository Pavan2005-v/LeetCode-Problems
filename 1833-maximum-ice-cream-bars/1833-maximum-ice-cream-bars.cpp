class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int count=0;
        int ans=0;
        for(int i:costs)
        {
            if(count+i<=coins)
            {
                ans++;
                count+=i;
            }
        }
        return ans;
    }
};