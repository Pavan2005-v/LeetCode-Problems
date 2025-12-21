class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.rbegin(),piles.rend());
        int iterations=piles.size()/3;
        int sum=0;
        int count=0;
        for(int i=1;i<piles.size();i+=2)
        {
            if(count<iterations)
            {
                sum+=piles[i];
                count++;
            }
        }
        return sum;
    }
};