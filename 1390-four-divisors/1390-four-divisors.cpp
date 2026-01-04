class Solution {
public:
    int Divisors(int n)
    {
        int c=0;
        int sum=0;
        for(int i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(i==n/i)
                {
                    c++;
                    sum+=i;
                }
                else
                {
                    c+=2;
                    sum+=i+(n/i);
                }
            }
        }
        cout<<sum<<endl;
        if(c==4) return sum;
        else return 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans+=(Divisors(nums[i]));
        }
        return ans;
    }
};