class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        long long sum=0;
        int ans=0,l=0,r=k-1;
        for(int i=0;i<k;i++) sum+=arr[i];
        if(sum/k>=threshold) ans++;
        while(r<arr.size()-1)
        {
            sum-=arr[l];
            l++;
            r++;
            sum+=arr[r];
            if(sum/k>=threshold) ans++;
        }
        return ans;
    }
};