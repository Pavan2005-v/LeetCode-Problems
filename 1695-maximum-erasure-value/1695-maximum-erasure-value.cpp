class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int l=0,r=0;
        long long maxi=0;
        vector<long long>pref;
        pref.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            pref.push_back(pref[i-1]+nums[i]);
        }
        unordered_map<int,int>mpp;
        while(r<nums.size())
        {
            mpp[nums[r]]++;
            while(mpp[nums[r]]>1)
            {
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0) mpp.erase(nums[l]);
                l++;
            }
            if(mpp.size()==r-l+1)
            {
                if(l==0)
                {
                    maxi=max(maxi,pref[r]);
                }
                else
                {
                    maxi=max(maxi,pref[r]-pref[l-1]);
                }
            }
            r++;
        }
        return maxi;
    }
};