class Solution {
public:
    int minPartitions(string n) {
        int ans=INT_MIN;
        for(char c:n)
        {
            ans=max(ans,c-'0');
        }
        return ans;
    }
};