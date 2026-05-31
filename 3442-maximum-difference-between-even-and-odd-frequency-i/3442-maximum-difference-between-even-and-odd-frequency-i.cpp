class Solution {
public:
    int maxDifference(string s) {
        int maxOdd=INT_MIN;
        int minEven=INT_MAX;
        vector<int>temp(26);
        for(char c:s) temp[c-'a']++;
        for(int i:temp)
        {
            if(i!=0)
            {
                if(i&1) maxOdd=max(maxOdd,i);
                else minEven=min(minEven,i);
            }
        }
        return maxOdd-minEven;
    }
};