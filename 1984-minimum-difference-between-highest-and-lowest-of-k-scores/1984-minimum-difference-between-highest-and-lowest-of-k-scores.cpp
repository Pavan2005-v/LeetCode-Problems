class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.rbegin(),nums.rend());
        int ans=INT_MAX;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(i+k-1<nums.size()) ans=min(ans,nums[i]-nums[i+k-1]);
        }
        if(ans==INT_MAX) return 0;
        return ans;
        
    }
};