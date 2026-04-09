class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>temp=nums;
        vector<int>ans;
        int n=nums.size()-1;
        sort(temp.rbegin(),temp.rend());
        unordered_map<int,int>mpp;
        for(int i=0;i<temp.size();i++)
        {
            mpp[temp[i]]=n-i;
        }
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(mpp[nums[i]]);
        }
        return ans;
    }
};