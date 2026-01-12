class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int mid=i+(j-i)/2;
        while(i<=j)
        {
            mid=i+(j-i)/2;
            if(nums[mid-1]<nums[mid]&&nums[mid]>nums[mid+1])
            {
                return mid;
            }
            else if(nums[mid]>nums[mid+1])
            {
                j=mid;
            }
            else if(nums[mid]<nums[mid+1])
            {
                i=mid;
            }

        }
        return mid;
    }
};