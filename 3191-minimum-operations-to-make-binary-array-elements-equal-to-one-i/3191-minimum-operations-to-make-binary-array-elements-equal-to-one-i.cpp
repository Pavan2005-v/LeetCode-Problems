class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size()-2;i++)
        {
            if(nums[i]==0)
            {
                for(int j=i;j<i+3;j++)
                {
                    if(nums[j]==0) nums[j]=1;
                    else nums[j]=0;
                }
                count++;
            }
        }
        for(int i:nums) 
        {
            if(i!=1) return -1;
        }
        return count;
    }
};