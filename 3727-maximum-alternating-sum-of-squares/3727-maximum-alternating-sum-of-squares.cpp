class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans=0;
        int c;
        for(int &i:nums) i=abs(i);
        sort(nums.begin(),nums.end());
        if(nums.size()%2==0)
        {
            c=nums.size()/2;
            for(int i=0;i<nums.size()/2;i++)
            {
                ans+=(nums[c]*nums[c]);
                ans-=(nums[i]*nums[i]);
                c++;
            }
            return ans;
        }
        else
        {
            c=nums.size()/2;
            int ind=c-1;
            for(int i=c;i<nums.size();i++)
            {
                ans+=(nums[i]*nums[i]);
                if(ind>=0) ans-=(nums[ind]*nums[ind]);
                ind--;
            }
            return ans;
        }
        return 1;
    }
};