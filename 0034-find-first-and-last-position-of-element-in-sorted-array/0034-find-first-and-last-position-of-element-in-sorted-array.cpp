class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2);
        int i=0;
        int j=nums.size()-1;
        int idx=-1;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(nums[mid]==target)
            {
                idx=mid;
                j=mid-1;
            }
            else if(nums[mid]>target)
            {
                j=mid-1;
            }
            else if(nums[mid]<target)
            {
                i=mid+1;
            }
        }
        ans[0]=idx;
        i=0;
        j=nums.size()-1;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(nums[mid]==target)
            {
                idx=mid;
                i=mid+1;
            }
            else if(nums[mid]>target)
            {
                j=mid-1;
            }
            else if(nums[mid]<target)
            {
                i=mid+1;
            }
        }
        ans[1]=idx;
        return ans;
    }
};