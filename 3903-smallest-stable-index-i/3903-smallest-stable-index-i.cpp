class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size()-1;
        vector<int>temp(n+1);
        temp[n]=nums[n];
        for(int i=n-1;i>=0;i--)
        {
            temp[i]=min(temp[i+1],nums[i]);
        }
        int num=nums[0];
        for(int i=0;i<=n;i++)
        {
            if(num-temp[i]<=k) return i;
            num=max(nums[i],num);
        }
        return -1;
    }
};