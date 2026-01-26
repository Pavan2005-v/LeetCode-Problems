class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int ans=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[i+1])
            {
                count++;
                ans+=count;
            }
            else
            {
                ans+=count;
            }
        }
        return ans;
    }
};