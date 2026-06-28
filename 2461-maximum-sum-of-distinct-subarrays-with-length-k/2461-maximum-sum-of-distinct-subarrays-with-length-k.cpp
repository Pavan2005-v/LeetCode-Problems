class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans=0;
        int l=0,r=k-1;
        unordered_map<int,int>mpp;
        long long int sum=0;
        int pt=0;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
            mpp[nums[i]]++;
            if(mpp[nums[i]]>1) pt=1;
        }
        if(!pt) ans=sum;
        while(r<nums.size()-1)
        {
            sum-=nums[l];
            mpp[nums[l]]--;
            if(mpp[nums[l]]==0) mpp.erase(nums[l]);
            l++;
            r++;
            mpp[nums[r]]++;
            sum+=nums[r];
            if(mpp.size()==r-l+1) ans=max(ans,sum);
        }
        return ans;
    }
};