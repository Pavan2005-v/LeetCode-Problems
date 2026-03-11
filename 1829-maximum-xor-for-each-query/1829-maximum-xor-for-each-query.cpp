class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maxBit) {
        vector<int>temp(nums.size());
        temp[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            temp[i]=temp[i-1]^nums[i];
        }
        int k=0;
        vector<int>ans(nums.size());
        for(int i=temp.size()-1;i>=0;i--)
        {
            int num=temp[i];
            int m=maxBit;
            int num1=0;
            int ind=0;
            while(m>0||num>0)
            {
                if(m>0)
                {
                    if(!(num&1)) num1|=(1<<ind);
                }
                else 
                {
                    if(num&1) num1|=(1<<ind);
                }
                num>>=1;
                m--;
                ind++;
            }
            num^=num1;
            ans[k]=num;
            k++;
        }
        return ans;
    }
};