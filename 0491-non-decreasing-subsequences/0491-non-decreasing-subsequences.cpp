class Solution {
public:
    bool isIncreasing(vector<int>nums)
    {
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1]) return false;
        }
        return true;
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>>ans;
        int n=nums.size();
        for(int i=0;i<(1<<n);i++)
        {
            vector<int>temp;
            for(int j=0;j<n;j++)
            {
                if(i&(1<<j))
                {
                    temp.push_back(nums[j]);
                }
            }
            if(temp.size()>=2&&isIncreasing(temp))
            {
                ans.insert(temp);
            }
        }
        vector<vector<int>>ans1(ans.begin(),ans.end());
        return ans1;
    }
};