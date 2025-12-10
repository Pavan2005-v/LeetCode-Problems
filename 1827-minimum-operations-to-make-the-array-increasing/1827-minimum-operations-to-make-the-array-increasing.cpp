class Solution {
public:
    int minOperations(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int count=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]>=nums[i])
            {
                if(nums[i]==nums[i-1]) count+=1;
                else count+=(nums[i-1]-nums[i])+1;
                nums[i]=nums[i-1]+1;    
            }
        }
        return count;
    }
};