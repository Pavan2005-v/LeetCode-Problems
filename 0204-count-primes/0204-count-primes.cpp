class Solution {
public:
    int countPrimes(int n) {
        vector<bool>temp(n,1);
        int ans=0;
        for(int i=2;i<n;i++)
        {
            if(temp[i])
            {
                ans++;
                for(int j=i*2;j<n+1;j+=i) temp[j]=0;
            }
        }   
       return ans;
    }
};