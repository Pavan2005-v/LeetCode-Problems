class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int num=0,n=nums.size()-1;
        for(int i=0;i<n;i++)
        {
            num++;
            if(nums[i]!=num) return false;
        }
        return nums[n]==num;
    }
};