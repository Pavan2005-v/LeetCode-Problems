class Solution {
public:
    long long maxPoints(vector<int>& arr1, vector<int>& arr2, int k) {
        vector<pair<int,vector<int>>>nums;
        for(int i=0;i<arr1.size();i++)
        {
            nums.push_back({arr1[i]-arr2[i],{arr1[i],arr2[i]}});
        }
        sort(nums.rbegin(),nums.rend());
        long long ans=0;
        for(int i=0;i<k;i++)
        {
            ans+=(nums[i].second[0]);
        }
        for(int i=k;i<nums.size();i++)
        {
            if(nums[i].second[0]>nums[i].second[1])
            {
                ans+=nums[i].second[0];
            }
            else ans+=nums[i].second[1];
        }
        return ans;
    }
};