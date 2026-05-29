class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini=INT_MAX;
        for(int i:nums)
        {
            int num=i;
            int sum=0;
            while(num>0)
            {
                sum+=(num%10);
                num/=10;
            }
            mini=min(mini,sum);
        }
        return mini;
    }
};