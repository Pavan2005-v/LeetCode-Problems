class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int>mpp;
        long long ans=0;
        int n=nums.size()-1;
        for(int i=0;i<nums.size();i++)
        {
            if(mpp.contains(i-nums[i]))
            {
                ans+=mpp[i-nums[i]];
            }
            mpp[i-nums[i]]++;
        }
        return ((long long)n*(n+1))/2-ans;
    }
};