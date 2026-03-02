class Solution {
public:
    vector<int> decode(vector<int>& nums) {
        int x=0;
        for(int i=0;i<=nums.size();i++)
        {
            x^=(i+1);
        }
        for(int i=1;i<nums.size();i+=2) x^=nums[i];
        vector<int>ans;
        ans.push_back(x);
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(ans[i]^nums[i]);
        }
        return ans;
    }
};