class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        if(nums.size()==1) return 0;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(mid!=0&&mid!=nums.size())
            {
                if(nums[mid]>nums[mid+1]&&nums[mid]>nums[mid-1]) return mid;
                else if(nums[mid]<nums[mid+1])
                {
                    i=mid+1;
                }
                else if(nums[mid]>nums[mid-1])
                {
                    j=mid-1;
                }
                else
                {
                    if(nums[mid-1]>nums[mid+1]) j=mid-1;
                    else i=mid+1;
                }
            }
            else
            {
                if(mid==0)
                {
                    if(nums[mid]>nums[mid+1]) return mid;
                    else break;
                }
                else if(mid==nums.size()-1)
                {
                    if(nums[mid]>nums[mid-1]) return mid;
                    else break;
                }
            }

        }
        return 1;

    }
};