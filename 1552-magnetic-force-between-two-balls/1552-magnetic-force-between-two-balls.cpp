class Solution {
public:
    bool isValid(vector<int>nums,int allowed,int k)
    {
        int pos=nums[0];
        int c=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-pos>=allowed)
            {
                c++;
                pos=nums[i];
            }
        }
        return c>=k;
    }
    int maxDistance(vector<int>& nums, int m) {
        sort(nums.begin(),nums.end());
        int i=1;
        int j=nums[nums.size()-1]-nums[0];
        int ans;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(isValid(nums,mid,m))
            {
                ans=mid;
                i=mid+1;
            }
            else j=mid-1;
        }
        return ans;

    }
};