class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n=nums.size(),mini=nums[0];
        vector<int>suff(n);
        suff[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suff[i]=min(suff[i+1],nums[i]);
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            if(mini<=suff[i+1])
            {
                return i+1;
            }
            mini=max(nums[i],mini);
        }
        return n;
    }
};