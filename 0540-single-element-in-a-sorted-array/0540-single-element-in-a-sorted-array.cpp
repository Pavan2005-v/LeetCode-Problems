class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int mid;
        if(nums.size()<=2) return nums[0];
        if(nums[nums.size()-1]!=nums[nums.size()-2]) return nums[nums.size()-1];
        else if(nums[0]!=nums[1]) return nums[0];
        while(i<=j)
        {
            mid=i+(j-i)/2;
            if(nums[mid]!=nums[mid+1]&&nums[mid]!=nums[mid-1]) return nums[mid];
            if((mid-i)%2==0)
            {
                if(nums[mid]==nums[mid+1])
                {
                    i=mid+1;
                }
                else j=mid-1;
            }
            else
            {
                if(nums[mid]==nums[mid+1])
                {
                    j=mid-1;
                }
                else i=mid+1;
            }
        }
        return nums[mid];
    }
};