class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int size=nums.size()/2,count=0,temp=size;
        if(nums.size()%2!=0) temp++;
        for(int i=0;i<size;i++)
        {
            if(nums[i]<nums[temp])
            {
                count++;
            }
            temp++;
        }
        return nums.size()-2*count;
    }
};