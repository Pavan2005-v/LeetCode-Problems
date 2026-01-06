class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        sort(nums.begin(),nums.end());
        vector<int>temp(nums.size());
        int count=0;
        int i=0;
        int j=nums.size()-1;
        while(i<=j)
        {
            if(nums[i]+nums[j]<=limit)
            {
                i++;
                j--;
            }
            else j--;
            count++;
        }
        return count;
    }
};