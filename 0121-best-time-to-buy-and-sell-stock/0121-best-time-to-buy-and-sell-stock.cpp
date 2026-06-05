class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>temp(n);
        temp[n-1]=prices[n-1];
        for(int i=prices.size()-2;i>=0;i--)
        {
            temp[i]=max(prices[i],temp[i+1]);
        }
        int ans=0;
        for(int i=0;i<prices.size()-1;i++)
        {
            ans=max(ans,temp[i+1]-prices[i]);
        }
        if(ans<0) return 0;
        return ans;
    }
};