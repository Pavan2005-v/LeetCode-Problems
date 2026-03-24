class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pref(nums.size());
        vector<int>suf(nums.size());
        pref[0]=nums[0];
        pref[1]=nums[0];
        int n=nums.size();
        for(int i=2;i<nums.size();i++)
        {
            pref[i]=pref[i-1]*nums[i-1];
        }
        suf[n-1]=nums[n-1];
        suf[n-2]=nums[n-1];
        for(int i=n-3;i>=0;i--)
        {
            suf[i]=suf[i+1]*nums[i+1];
        }
        vector<int>ans(nums.size());
        ans[0]=suf[0];
        ans[n-1]=pref[n-1];
        for(int i=1;i<nums.size()-1;i++)
        {
            ans[i]=pref[i]*suf[i];
        }
        return ans;
    }
};