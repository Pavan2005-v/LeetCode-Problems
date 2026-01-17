class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& target) {
        int count=0;
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=target[i])
            {
                mpp[nums[i]]++;
            }
        }
        return mpp.size();
    }
};