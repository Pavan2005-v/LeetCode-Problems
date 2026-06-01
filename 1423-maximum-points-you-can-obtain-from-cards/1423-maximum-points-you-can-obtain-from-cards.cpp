class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int lsum=0,ans=0;
        for(int i=0;i<k;i++)
        {
            lsum+=nums[i];
        }
        ans=lsum;
        int ind=nums.size()-1;
        int rsum=0;
        for(int i=k-1;i>=0;i--)
        {
            lsum-=nums[i];
            rsum+=nums[ind];
            ind--;
            ans=max(ans,lsum+rsum);
        }
        return ans;
    }
};