class Solution {
public:
    bool isValid(int num1,int num2)
    {
        int c1=0;
        int c2=0;
        while(num1)
        {
            c1+=(num1%10);
            num1/=10;
        }
        while(num2)
        {
            c2+=(num2%10);
            num2/=10;
        }
        return c1==c2;
    }
    int maximumSum(vector<int>& nums) {
        int ans=-1;
        sort(nums.rbegin(),nums.rend());
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(isValid(nums[i],nums[j])) ans=max(ans,nums[i]+nums[j]);
            }
        }
        return ans;
    }
};