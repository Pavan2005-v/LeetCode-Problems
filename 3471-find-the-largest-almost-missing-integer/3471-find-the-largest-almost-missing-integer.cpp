class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size(), maxi=0;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
            maxi=max(maxi,nums[i]);
        }
        if(k==n)
        {
            return maxi;
        }
        if(k==1)
        {
            int maxi=-1;
            for(auto i:mpp)
            {
                if(i.second==1)
                {
                    maxi=max(i.first,maxi);
                }
            }
            return maxi;
        }
















        int ans=-1;
        if(mpp[nums[0]]==1)
        {
            ans=max(ans,nums[0]);
        }
        if(mpp[nums[n-1]]==1)
        {
            ans=max(ans,nums[n-1]);
        }
        return ans;





    }
};