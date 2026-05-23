class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum%k==0&&i>=1) return true;
            if(mpp.contains(sum%k))
            {
                if((i-mpp[sum%k])>=2) return true;
            }
            else mpp[sum%k]=i;
        }
        return false;
    }
};