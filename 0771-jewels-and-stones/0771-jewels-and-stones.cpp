class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int sum=0;
        unordered_map<char,int> mpp;
        for(char c:stones) mpp[c]++;
        for(int i=0;i<jewels.size();i++)
        {
            if(mpp.count(jewels[i]))
            {
                sum+=mpp[jewels[i]];
            }   
        }
        return sum;
    }
};