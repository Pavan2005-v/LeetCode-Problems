class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int zeros=0;
        int ans=0;
        if(nums[0]==0) zeros++;
        while(r<nums.size())
        {
            if(zeros>k)
            {
                if(nums[l]==0)
                {
                    zeros--;
                }
                l++;
            }
            else 
            {
                ans=max(ans,r-l+1);
                r++;
                if(r<nums.size()&&nums[r]==0) zeros++;
            }
            // cout<<l<<" "<<r<<endl;
        }
        return ans;
    }
};