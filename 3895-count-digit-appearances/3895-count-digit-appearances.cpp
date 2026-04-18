class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans=0;
        for(int i:nums)
        {
            int num=i;
            while(num>0)
            {
                if(num%10==digit) ans++;
                num/=10;
            }
        }
        return ans;
    }
};