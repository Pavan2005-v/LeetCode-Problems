class Solution {
public:
    bool isValid(long long int sum,int x)
    {
        if(sum%10!=x) return false;
        int r=-1;
        while(sum>0)
        {
            r=sum%10;
            sum/=10;
        }
        return r==x;
    }
    int countValidSubarrays(vector<int>& nums, int x) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            long long int sum=0;
            for(int j=i;j<nums.size();j++)
            {
                sum+=nums[j];
                if(isValid(sum,x))
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};