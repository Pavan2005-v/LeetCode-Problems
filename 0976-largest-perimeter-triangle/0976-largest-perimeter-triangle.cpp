class Solution {
public:
    bool func(int a,int b,int c)
    {
        if(a+b>c&&c+a>b&&b+c>a)
        {
            return true;
        }
        else return false;
    }
    int largestPerimeter(vector<int>& nums) {
        int ans=0;
        sort(nums.rbegin(),nums.rend());
        for(int i=0;i<nums.size()-2;i++)
        {
            if(func(nums[i],nums[i+1],nums[i+2]))
            {
                return nums[i]+nums[i+1]+nums[i+2];
            }
        }
        return 0;
    }
};