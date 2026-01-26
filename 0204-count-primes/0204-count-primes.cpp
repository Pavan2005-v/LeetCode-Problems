class Solution {
public:
    int countPrimes(int n) {
        vector<int>temp(n,1);
        for(int i=2;i*i<=n;i++)
        {
            if(temp[i]==0) continue;
            int j=2;
            while((j*i)<n)
            {
                temp[(j*i)]=0;
                j++;
            }
        }
        int ans=0;
        for(int i=2;i<temp.size();i++) if(temp[i]==1) ans++;
        return ans;
    }
};