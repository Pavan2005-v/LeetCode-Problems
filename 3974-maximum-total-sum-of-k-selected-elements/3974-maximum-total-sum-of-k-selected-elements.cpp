class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end(),greater<int>());
        long long sum=0;
        for(int i=0;i<k;i++)
        {
            if(mul>0) sum+=((long long)nums[i]*mul);
            else sum+=nums[i];
            mul--;
        }
        return sum;
    }
};