class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int l=0,ind=k;
        long long r=k*2;
        vector<int>ans(nums.size(),-1);
        long long int sum=0;
        for(int i=0;i<r+1;i++) 
        {
            if(i<nums.size()) sum+=nums[i];
        }
        if(l<nums.size()&&r<nums.size()) ans[ind]=sum/(r-l+1);
        ind++;
        while(r<nums.size()-1)
        {
            sum-=nums[l++];
            sum+=nums[++r];
            ans[ind++]=sum/(r-l+1);
        }
        return ans;
    }
};