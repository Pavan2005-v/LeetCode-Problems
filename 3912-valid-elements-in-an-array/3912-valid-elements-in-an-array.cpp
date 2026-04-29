class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums;
        vector<int>pref;
        vector<int>suff(n);
        vector<int>ans;
        pref.push_back(nums[0]);
        suff[n-1]=nums[n-1];
        for(int i=1;i<n;i++)
        {
            pref.push_back(max(pref[i-1],nums[i]));
        }
        for(int i=n-2;i>=0;i--)
        {
            suff[i]=max(suff[i+1],nums[i]);
        }
        ans.push_back(nums[0]);
        for(int i=1;i<n-1;i++)
        {
            if((nums[i]>pref[i-1])||(nums[i]>suff[i+1]))
            {
                ans.push_back(nums[i]);
            }
        }
        ans.push_back(nums[n-1]);
        return ans;
    }
};