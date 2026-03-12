class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        int num=0;
        for(int i=0;i<32;i++)
        {
            int temp=0;
            int k=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]&(1<<i))
                {
                    k=1;
                }
                else temp^=0;
            }
            if(k&&!temp) num|=(1<<i);
        }
        return num;
    }
};