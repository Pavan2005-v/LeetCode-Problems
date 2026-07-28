class Solution {
public:
    bool isValid(vector<int>nums,vector<vector<int>>q,int k)
    {
        int n=nums.size();
        vector<int>ans(n);
        for(int i=0;i<=k;i++)
        {
            ans[q[i][0]]-=q[i][2];
            if(q[i][1]+1<n) ans[q[i][1]+1]+=q[i][2];
        }
        for(int i=1;i<n;i++)
        {
            ans[i]+=ans[i-1];
        }
        for(int i=0;i<n;i++)
        {
            nums[i]+=ans[i];
        }
        for(int i:nums)
        {
            if(i>0) return false;
        }
        return true;
    }
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int l=0,r=queries.size()-1,m=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                m=0;
                break;
            }
        }
        if(m==-1) return 0;
        if(!(isValid(nums,queries,r))) return -1;
        if((isValid(nums,queries,l))) return 1;
        int ans=INT_MAX;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(isValid(nums,queries,mid))
            {
                ans=min(ans,mid+1);
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return ans;
    }
};