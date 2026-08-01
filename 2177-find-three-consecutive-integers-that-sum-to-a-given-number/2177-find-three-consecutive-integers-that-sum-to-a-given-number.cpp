class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        // long long n=num/2;
        long long l=-1000000000000000,r=num;
        vector<long long int>ans;
        while(l<=r)
        {
            long long mid=l+(r-l)/2;
            if(3*mid>=num-3)
            {
                if(3*mid==num-3) ans={mid,mid+1,mid+2};
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return ans;
    }
};