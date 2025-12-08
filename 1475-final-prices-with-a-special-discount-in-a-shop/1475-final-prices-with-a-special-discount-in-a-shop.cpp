class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
        for(int i=0;i<prices.size();i++)
        {
            int k=0;
            for(int j=i+1;j<prices.size();j++)
            {
                if(prices[j]<=prices[i])
                {
                    ans.push_back(prices[i]-prices[j]);
                    k=1;
                    break;
                }
            }
            if(!k) ans.push_back(prices[i]);
        }
        return ans;        
    }
};