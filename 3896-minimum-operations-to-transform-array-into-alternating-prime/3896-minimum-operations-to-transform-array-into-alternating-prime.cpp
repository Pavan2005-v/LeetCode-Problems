class Solution {
public:
    bool isPrime(int num)
    {
        if(num<=1) return false;
        for(int i=2;i*i<=num;i++)
        {
            if(num%i==0) return false;
        }
        return true;
    }
    int minOperations(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int num=nums[i];
            if(i&1)
            {
                if(isPrime(num)&&num!=2)
                {
                    ans++;
                    nums[i]=nums[i-1]+1;
                }
                else if(isPrime(num)) ans+=2;
            }
            else
            {
                while(!isPrime(num))
                {
                    num++;
                    ans++;
                }
            }
        }
        return ans;
    }
};