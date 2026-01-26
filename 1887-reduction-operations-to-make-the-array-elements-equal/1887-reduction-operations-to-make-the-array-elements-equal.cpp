class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=nums[0]) count++;
        }
        if(count==0) return count;
        else return count+1;
    }
};