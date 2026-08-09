class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        vector<long long>pref(n,1);
        int MOD=1000000007;
        while(k>0)
        {
            for(int i=1;i<n;i++)
            {
                pref[i]+=(long long)pref[i-1]%MOD;
            }
            k--;
        }
        return pref[n-1]%MOD;
    }
};