class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int,int>mp;
        int n=nums.size(),cnt=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp.find(nums[i]-diff)!=mp.end() && mp.find(nums[i]+diff)!=mp.end()) cnt++;
        }
        return cnt;
    }
};