class Solution {
public:
    bool isSorted(vector<int>nums,int ind1,int size)
    {
        for(int i=ind1;i<(ind1+size)-1;i++)
        {
            if(nums[i]>nums[i+1]) return false;
        }
        return true;
    }
    bool check(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            nums.push_back(nums[i]);
            if(isSorted(nums,i+1,n)) return true;
        }
        return false;
    }
};