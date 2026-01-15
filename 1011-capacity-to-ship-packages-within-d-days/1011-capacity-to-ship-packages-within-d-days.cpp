class Solution {
public:
    bool isValid(vector<int>nums,int mid,int d)
    {
        int c=0;
        int day=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>mid) return false;
            if(c+nums[i]<=mid)
            {
                c+=nums[i];
            }
            else
            {
                day++;
                c=nums[i];
            }
        }
        return day<=d;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int i=0;
        int j=0;
        for(int num:weights) j+=num;
        int ans=INT_MAX;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(isValid(weights,mid,days))
            {
                ans=min(ans,mid);
                j=mid-1;
            }
            else
            {
                i=mid+1;
            }
        }
        return ans;
    }
};