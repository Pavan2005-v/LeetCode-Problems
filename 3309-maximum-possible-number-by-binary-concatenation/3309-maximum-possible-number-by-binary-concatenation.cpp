class Solution {
public:
    int maxGoodNumber(vector<int>& nums) {
        int a=32-__builtin_clz(nums[0]);
        int b=32-__builtin_clz(nums[1]);
        int c=32-__builtin_clz(nums[2]);
        int ans=0,x;
        x=(((nums[0]<<b)+nums[1])<<c)+nums[2];
        ans=max(ans,x);
        x=(((nums[0]<<c)+nums[2])<<b)+nums[1];
        ans=max(ans,x);
        x=(((nums[2]<<a)+nums[0])<<b)+nums[1];
        ans=max(ans,x);        
        x=(((nums[2]<<b)+nums[1])<<a)+nums[0];
        ans=max(ans,x);        
        x=(((nums[1]<<a)+nums[0])<<c)+nums[2];
        ans=max(ans,x);
        x=(((nums[1]<<c)+nums[2])<<a)+nums[0];
        ans=max(ans,x);
        return ans;
    }
};