class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>ans;
        unordered_set<int>st(nums[0].begin(),nums[0].end());
        for(int j:st)
        {
            int count=0;
            for(int i=0;i<nums.size();i++)
            {
                if(find(nums[i].begin(),nums[i].end(),j)!=nums[i].end())count++;
            }
            if(count==nums.size()) ans.push_back(j);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};