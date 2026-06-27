class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int l=0,r=1;
        vector<int>ans;
        while(l<nums.size())
        {
            if(r>=nums.size())
            {
                r=0;
            }
            if(r==l)
            {
                ans.push_back(-1);
                l++;
                r=l;
            }
            if(l<nums.size())
            {
                if(nums[l]<nums[r])
                {
                    ans.push_back(nums[r]);
                    l++;
                    r=l;
                }
            }
            r++;
        }
        return ans;
    }
};