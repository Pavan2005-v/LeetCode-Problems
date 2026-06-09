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
        if(maxi!=mini)
        {
            return (long long)(maxi-mini)*k;
        }
        int mini1=INT_MAX;
        for(int i:nums)
        {
            if(i!=mini) mini1=min(mini1,i);
        }
        if(mini1==INT_MAX) return 0;
        return (long long)(maxi-mini1)*k;
    }
};