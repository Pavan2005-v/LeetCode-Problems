class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<long long> temp(nums.size());
        temp[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            temp[i]=temp[i-1]+nums[i];
        }
        long long int ans=INT_MIN;
        for(int i=0;i<temp.size()-1;i++)
        {
            if(temp[i]>nums[i+1])
            {
                ans=max((long long)ans,temp[i]+nums[i+1]);
            }
        }
        if(ans==INT_MIN) return -1;
        else return ans;

    }
};