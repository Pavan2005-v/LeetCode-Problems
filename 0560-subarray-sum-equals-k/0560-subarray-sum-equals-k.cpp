class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0;
        vector<int>pref;
        pref.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            pref.push_back(pref[i-1]+nums[i]);
        }
        for(int i=0;i<pref.size();i++)
        {
            long long int sum=pref[i];
            if(sum==k) ans++;
            for(int j=0;j<i;j++)
            {
                if(sum-pref[j]==k) ans++;
            }
        }
        return ans;
    }
};