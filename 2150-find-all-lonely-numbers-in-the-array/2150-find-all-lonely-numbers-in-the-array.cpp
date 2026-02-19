class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int>mpp;
        vector<int>ans;
        for(int i:nums)
        {
            mpp[i]++;
        }
        for(auto it:mpp)
        {
            if(it.second==1&&!mpp.contains(it.first+1)&&!mpp.contains(it.first-1))
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    
    }
};