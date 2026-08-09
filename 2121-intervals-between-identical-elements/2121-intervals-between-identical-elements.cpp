class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) {
        unordered_map<int,long long>mpp1,mpp2;
        unordered_map<int,int>count1,count2;
        vector<long long>ans;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mpp1[arr[i]]+=i;
            count1[arr[i]]++;
        }
        count2[arr[0]]++;
        ans.push_back(mpp1[arr[0]]);
        for(int i=1;i<n;i++)
        {
            mpp2[arr[i]]+=i;
            count2[arr[i]]++;
            long long sum1=abs((1LL*count2[arr[i]]*i)-mpp2[arr[i]]);
            int freq=count1[arr[i]]-count2[arr[i]];
            long long rem=mpp1[arr[i]]-mpp2[arr[i]];
            long long sum2=abs((1LL*freq*i)-rem);
            ans.push_back(sum1+sum2);
        }
        return ans;
    }
};