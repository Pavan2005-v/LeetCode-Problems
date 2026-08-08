class Solution {
public:
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        long long sum=0,ans;
        int n=prices.size();
        vector<long long>pref;
        for(int i=0;i<n;i++)
        {
            sum+=(1LL*prices[i]*strategy[i]);
            pref.push_back(sum);
        }
        ans=sum;
        sum=0;
        for(int i=k/2;i<k;i++)
        {
            sum+=prices[i];
        }
        if(n>2)
        {
            ans=max(ans,sum+pref[n-1]-pref[k-1]);
        }
        else ans=max(ans,sum);
        int l=0,r=k-1;
        while(r<n-1)
        {
            l++;
            sum-=prices[l+(k/2)-1];   
            r++;
            sum+=prices[r];
            if(r==n-1)
            {
                ans=max(ans,sum+pref[l-1]);
            }
            else
            {
                ans=max(ans,sum+pref[l-1]+(pref[n-1]-pref[r]));
            }
        }
        return ans;
    }
};