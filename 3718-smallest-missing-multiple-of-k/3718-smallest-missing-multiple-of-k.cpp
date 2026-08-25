class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size(),maxi=0;
        vector<bool>temp;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%k==0)
            {
                maxi=max(maxi,nums[i]);
            }
        }
        temp.resize(maxi);
        for(int i=0;i<n;i++)
        {
            if(nums[i]%k==0)
            {
                temp[nums[i]-1]=true;
            }
        }
        for(int i=k-1;i<maxi;i+=k)
        {
            if(temp[i]==false)
            {
                return i+1;
            }
        }
        return maxi+=k;
    }
};