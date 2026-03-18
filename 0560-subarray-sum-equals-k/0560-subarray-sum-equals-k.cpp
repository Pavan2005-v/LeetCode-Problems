class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int pref=0,n=nums.size(),count=0;
        for(int i=0;i<n;i++)
        {
            pref+=nums[i];
            if(pref==k) count++;
            if(mpp.contains(pref-k))
            {
                count+=mpp[pref-k];
            }
            mpp[pref]++;
        }
        return count;
    }
};