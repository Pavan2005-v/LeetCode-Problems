class Solution {
public:
    int minimumCardPickup(vector<int>& nums) {
        int l=0,r=0,ans=INT_MAX;
        unordered_map<int,int>mpp;
        while(r<nums.size())
        {
            mpp[nums[r]]++;
            while(mpp[nums[r]]>1)
            {
                ans=min(ans,r-l+1);
                mpp[nums[l]]--;
                l++;
            }
            r++;
        }
        return (ans!=INT_MAX)?ans:-1;
    }
};