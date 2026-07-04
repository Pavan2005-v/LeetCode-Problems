class Solution {
public:
    int totalFruit(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int l=0,r=0,ans=0;
        while(r<nums.size())
        {
            mpp[nums[r]]++;
            while(mpp.size()>2)
            {
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0) mpp.erase(nums[l]);
                l++;
            }
            if(mpp.size()<=2) ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};