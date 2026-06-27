class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0,r=0;
        while(r<nums.size())
        {
            if(nums[l]<nums[r])
            {
                swap(nums[l+1],nums[r]);
                l++;
            }
            r++;
        }
        return l+1;
    }
};