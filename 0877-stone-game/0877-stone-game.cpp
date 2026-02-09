class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        sort(piles.rbegin(),piles.rend());
        int sum1=0;
        int sum2=0;
        for(int i=0;i<piles.size();i++)
        {
            if(i%2)sum2+=piles[i];
            else sum1+=piles[i];
        }
        return sum1>sum2;
    }
};