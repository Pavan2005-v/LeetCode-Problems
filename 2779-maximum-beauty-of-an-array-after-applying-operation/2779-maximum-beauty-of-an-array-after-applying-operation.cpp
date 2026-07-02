class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0,j=0,ans=0,count=0;
        while(i<nums.size()&&j<nums.size())
        {
            if(nums[i]-k<=nums[j]+k)
            {
                i++;
                ans++;
                count=max(count,ans);
            }
            else
            {
                j++;
                ans--;
            }
        }
        return count;
    }
};