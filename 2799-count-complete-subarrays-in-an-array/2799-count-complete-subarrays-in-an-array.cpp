class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int l=0,r=0,ans=0,n=nums.size();
        unordered_map<int,int>mpp;
        for(int i:nums) mpp[i]++;
        int count=mpp.size();
        mpp.clear();
        while(r<nums.size())
        {
            mpp[nums[r]]++;
            while(mpp.size()==count)
            {
                ans+=(n-r);
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0) mpp.erase(nums[l]);
                l++;
            }
            r++;
        }
        return ans;
    }
};