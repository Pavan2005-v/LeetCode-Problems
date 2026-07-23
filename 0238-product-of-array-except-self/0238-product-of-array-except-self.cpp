class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>pref(n),ans(n);
        pref[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            pref[i]=((long long)pref[i+1]*nums[i]);
        }
        long long prod=nums[0];
        ans[0]=pref[1];
        for(int i=1;i<n-1;i++)
        {
            ans[i]=((long long)prod*pref[i+1]);
            prod*=nums[i];
        }
        ans[n-1]=prod;
        return ans;
    }
};