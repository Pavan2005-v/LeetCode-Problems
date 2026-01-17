class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        map<int,int>mpp;
        for(int i:nums)mpp[i]++;
        for(auto &it:mpp)
        {
            mpp[it.second]=it.first;
        }
        for(auto it:mpp)
        {
            if(k>0)
            {
                ans.push_back(it.first);
            }
            k--;
        }
        return ans;
    }
};