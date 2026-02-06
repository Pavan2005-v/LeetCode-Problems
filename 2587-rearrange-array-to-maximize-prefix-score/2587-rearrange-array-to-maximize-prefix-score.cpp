class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        long long int sum=0;
        int c=0;
        int zero=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                sum+=nums[i];
                c++;
            }
            if(nums[i]==0) zero++;
        }
        if(sum==0) return 0;
        int ans=c;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                if(sum+nums[i]>0)
                {
                    sum+=nums[i];
                    ans++;
                }
            }
        }
        ans+=zero;
        return ans;
    }
};