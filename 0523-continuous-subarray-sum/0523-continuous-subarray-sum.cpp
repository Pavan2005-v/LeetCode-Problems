class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,vector<int>>mpp;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum%k==0&&i>=1) return true;
            mpp[sum%k].push_back(i);
        }
        for(auto it:mpp)
        {
            vector<int>temp=it.second;
            if(temp.size()>=2)
            {
                for(int i=0;i<temp.size();i++)
                {
                    for(int j=i+1;j<temp.size();j++)
                    {
                        if(temp[j]-temp[i]>=2) return true;
                    }
                }
            }
        }
        return false;
    }
};