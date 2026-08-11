class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long int x=0;
        for(int i:nums)
        {
            x^=i;
        }
        int count=0;
        x=abs(x);
        while(x>0)
        {
            if(x&1)
            {
                break;
            }
            count++;
            x>>=1;
        }
        int num1=0;
        for(int i:nums)
        {
            if((1<<count)&i)
            {
                num1^=i;
            }
        }
        int num2=num1;
        for(int i:nums)
        {
            num2^=i;
        }
        return {num1,num2};
    }
};