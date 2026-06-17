class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans=INT_MIN;
        int dis=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            int dist=abs(nums[i]-0);
            dis=min(dis,dist);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(abs(nums[i]-0)==dis) ans=max(ans,nums[i]);
        }
        return ans;
    }
};