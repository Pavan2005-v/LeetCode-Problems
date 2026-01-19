class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int ans=nums[0];
        int ind;
        int ele=100;
        for(int i=1;i<nums.size();i++)
        {
            if(ele>nums[i])
            {
                ele=nums[i];
                ind=i;
            }
        }
        int ele1=100;
        for(int i=1;i<nums.size();i++)
        {
            if(i!=ind)
            {
                ele1=min(ele1,nums[i]);
            }
        }
        return ans+ele+ele1;
        
    }
};