class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            if(mpp[nums[i]]<k)
            {
                ans.push_back(nums[i]);
                mpp[nums[i]]++;
            }
        }
        return ans;
    }
};