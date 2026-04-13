class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long ans=0,n=nums.size()-1;
        unordered_map<int,int>mpp;
        long long int gp=(n*(n+1))/2;
        for(int i=0;i<nums.size();i++)
        {
            int dif=i-nums[i];
            if(mpp.contains(dif))
            {
                ans+=mpp[dif];
            }
            mpp[dif]++;
        }
        return gp-ans;
    }
};