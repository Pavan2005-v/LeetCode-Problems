class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(i<j)
        {
            int mid=i+(j-i)/2;
            if(nums[mid]-nums[j]==0||nums[mid]-nums[i]==0)
            {
                return nums[mid];
            }
            else if(abs(nums[mid]-nums[j])>abs(nums[mid]-nums[i]))
            {
                j=mid;
            }
            else if(abs(nums[mid]-nums[j])<=abs(nums[mid]-nums[i]))
            {
                i=mid;
            }
        }
        return -1;
    }
};