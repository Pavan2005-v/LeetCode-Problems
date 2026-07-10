class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<long long>pref;
        int n=nums.size();
        pref.push_back(nums[0]);
        for(int i=1;i<n;i++)
        {
            pref.push_back(nums[i]+pref[i-1]);
        }
        for(int i=n-2;i>=0;i--)
        {
            if(pref[i]>nums[i+1]) return pref[i]+nums[i+1];
        }
        return -1;
    }
};