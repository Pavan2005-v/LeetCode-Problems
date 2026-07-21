class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=0,r=0;
        while(l<nums.size()&&r<nums.size())
        {
            if(nums[r]==0&&nums[l]!=0)
            {
                l=r;
                r=l+1;
            }
            if(r<nums.size()&&nums[l]==0&&nums[r]!=0)
            {
                swap(nums[l],nums[r]);
                l++;
            }
            else
            {
                r++;
            }
        }
    }
};