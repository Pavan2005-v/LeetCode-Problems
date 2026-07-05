class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        unordered_map<int,int>mpp;
        long long ans=0,sum=0;
        for(int i=0;i<k;i++)
        {
            mpp[nums[i]]++;
            sum+=nums[i];
        }
        if(mpp.size()>=m) ans=sum;
        int l=0,r=k-1;
        while(r<nums.size()-1)
        {
            mpp[nums[l]]--;
            if(mpp[nums[l]]==0) mpp.erase(nums[l]);
            sum-=nums[l];
            l++;
            r++;
            sum+=nums[r];
            mpp[nums[r]]++;
            if(mpp.size()>=m) ans=max(ans,sum);
        }
        return ans;
    }
};