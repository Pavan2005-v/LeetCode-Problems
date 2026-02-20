class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans=2;
        for(int i=0;i<nums.size()-2;i++)
        {
            if(nums[i]+nums[i+1]==nums[i+2])
            {
                int num1=nums[i+1];
                int num2=nums[i+2];
                int ind=i+3;
                while(ind<nums.size()&&num1+num2==nums[ind])
                {
                    ind++;
                    num1=nums[ind-2];
                    num2=nums[ind-1];
                }
                ans=max(ans,ind-i);
            }
        }
        // if(ans==1)
        // {
        //     for(int i=0;i<nums.size()-1;i++)
        //     {
        //         if(nums[i]==nums[i+1])
        //         {
        //             ans=2;
        //         }
        //     }
        // }
        return ans;
    }
};