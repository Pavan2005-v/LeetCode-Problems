class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,vector<int>>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]].push_back(i);
        }
        for(auto it:mpp)
        {
            vector<int>temp=it.second;
            if(temp.size()>1)
            {
                for(int i=0;i<temp.size()-1;i++)
                {
                    if(abs(temp[i]-temp[i+1])<=k) return true;
                }
            }
        }
        return false;
    }
};