class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size());
        vector<int>pp(nums.size());
        vector<int>sp(nums.size());
        pp[0]=nums[0];
        for(int i=1;i<nums.size();i++) pp[i]=pp[i-1]*nums[i];
        sp[sp.size()-1]=nums[sp.size()-1];
        for(int i=nums.size()-2;i>=0;i--)
        {
            sp[i]=sp[i+1]*nums[i];
        }
        ans[0]=sp[1];
        ans[nums.size()-1]=pp[nums.size()-2];
        for(int i=1;i<nums.size()-1;i++)
        {
            ans[i]=pp[i-1]*sp[i+1];
        }
        return ans;
    }
};