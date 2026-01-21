class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int ans=INT_MIN;
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==key) mpp[nums[i+1]]++;
        }
        int maxi=INT_MIN;
        int ans1;
        for(auto it:mpp)
        {
            if(it.second>maxi)
            {
                maxi=it.second;
                ans1=it.first;
            }
        }
        return ans1;
    }
};