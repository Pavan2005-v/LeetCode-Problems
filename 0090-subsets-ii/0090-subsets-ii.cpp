class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        ans.push_back({});
        for(int i=0;i<nums.size();i++)
        {
            int size=ans.size();
            vector<int>temp;
            for(int j=0;j<size;j++)
            {
                temp=ans[j];
                temp.push_back(nums[i]);
                if(find(ans.begin(),ans.end(),temp)==ans.end()) ans.push_back(temp);
            }
        }
        
        return ans;
    }
};