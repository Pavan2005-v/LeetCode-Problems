class Solution {
public:
    bool isPrime(int n)
    {
        if(n<=1) return false;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0) return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int n=nums.size(),m=nums[0].size();
        int i=0,j=0,maxi=0;
        while(i<n&&j<n)
        {
            if(isPrime(nums[i][j]))
            {
                maxi=max(maxi,nums[i][j]);
            }
            i++;
            j++;
        }
        i=0,j=m-1;
        while(i<n&&j>=0)
        {
            if(isPrime(nums[i][j]))
            {
                maxi=max(maxi,nums[i][j]);
            }
            i++;
            j--;
        }
        return maxi;
    }
};