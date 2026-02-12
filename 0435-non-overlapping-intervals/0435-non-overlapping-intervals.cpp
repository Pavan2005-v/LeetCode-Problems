class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end(),[](const vector<int>&a,const vector<int>&b){
            return a[1]<b[1];
        });
        int count=0;
        int num=nums[0][1];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i][0]>=num)
            {
                num=nums[i][1];
            }
            else count++;
        }
        return count;
    }
};