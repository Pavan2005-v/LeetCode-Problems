class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i:nums)
        {
            maxi=max(maxi,i);
            mini=min(mini,i);
        }
        return 1LL*(maxi-mini)*k;
    }
};