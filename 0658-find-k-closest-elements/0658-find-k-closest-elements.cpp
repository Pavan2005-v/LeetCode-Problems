class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
        int l=0,r=nums.size()-1;
        while((r-l)>=k)
        {
            if(abs(nums[l]-x)>abs(nums[r]-x))
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        vector<int>ans;
        for(int i=l;i<=r;i++) ans.push_back(nums[i]);
        return ans;
    }
};