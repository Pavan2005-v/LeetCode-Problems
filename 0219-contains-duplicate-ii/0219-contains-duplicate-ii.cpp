class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            if(mpp.contains(nums[i]))
            {
                if(abs(mpp[nums[i]]-i)<=k) return true;
            }
            mpp[nums[i]]=i;
        }
        return false;
    }
};