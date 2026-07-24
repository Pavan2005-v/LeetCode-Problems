class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n=arr.size(),sum=0,even_sum=0,odd_sum=0;
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum&1)
            {
                ans+=(even_sum+1);
                odd_sum++;
            }
            else
            {
                ans+=odd_sum;
                even_sum++;
            }
        }
        return ans%1000000007;
    }
};