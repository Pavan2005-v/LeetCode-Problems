class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>temp(n);
        temp[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            temp[i]=min(temp[i+1],nums[i]);
        }
        int num=nums[0];
        for(int i=0;i<n;i++)
        {
            num=max(nums[i],num);
            if(num-temp[i]<=k) return i;
        }
        return -1;
    }
};