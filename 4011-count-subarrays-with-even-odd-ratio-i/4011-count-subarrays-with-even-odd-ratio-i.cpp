class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int ans=0,n=nums.size();
        double x=a/(double)b;
        for(int i=0;i<n;i++)
        {
            int c1=0,c2=0;
            for(int j=i;j<n;j++)
            {
                if(nums[j]&1) c2++;
                else c1++;
                if(c2!=0&&(double)(c1/(double)c2)<=x)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};