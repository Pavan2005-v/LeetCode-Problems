class Solution {
public:
    int rev(int n)
    {
        int num=0;
        while(n>0)
        {
            num=num*10+n%10;
            n/=10;
        }
        return num;
    }
    int countNicePairs(vector<int>& nums) {
        const int MOD=1000000007;
        int ans=0;
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            int dif=nums[i]-rev(nums[i]);
            if(mpp.contains(dif))
            {
                ans=(ans+mpp[dif])%MOD;
            }
            mpp[dif]++;
        }
        return ans;
    }
};