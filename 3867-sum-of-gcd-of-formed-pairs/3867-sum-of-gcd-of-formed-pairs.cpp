class Solution {
public:
    long long GCD(int n,int m)
    {
        while(n>0&&m>0)
        {
            if(n>m) n%=m;
            else m%=n;
        }
        return (n==0)?m:n;
    }
    long long gcdSum(vector<int>& nums) {
        int maxi=nums[0];
        vector<int>pref;
        for(int i=0;i<nums.size();i++)
        {
            maxi=max(nums[i],maxi);
            pref.push_back(GCD(nums[i],maxi));
        }
        sort(pref.begin(),pref.end());
        int l=0,r=pref.size()-1;
        long long ans=0;
        while(l<r)
        {
            ans+=(GCD(pref[l],pref[r]));
            l++;
            r--;
        }
        return ans;
    }
};