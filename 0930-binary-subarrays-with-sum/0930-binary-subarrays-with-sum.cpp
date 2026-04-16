class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mpp;
        int sum=0,ans=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum==goal) ans++;
            if(mpp.contains(sum-goal))
            {
                ans+=mpp[sum-goal];
            }
            mpp[sum]++;
        }  
        return ans;
    }
};