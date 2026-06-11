class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int l=0,r=1;
        vector<int>ans;
        while(l<nums.size())
        {
            if(r==l)
            {
                ans.push_back(-1);
                l++;
                r=l+1;
            }
            if(r>=nums.size())
            {
                r=0;
            }
            if(l<nums.size()&&nums[l]<nums[r])
            {
                ans.push_back(nums[r]);
                l++;
                r=l;
            }
            r++;
            if(r>=nums.size())
            {
                r=0;
            }
        }
        return ans;
    }
};