class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& nums) {
        vector<int>ans(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            int index=-1;
            int mini=INT_MAX;
            for(int j=0;j<nums.size();j++)
            {
                // if(i==j) continue;
                if(nums[j][0]>=nums[i][1])
                {
                    if(nums[j][0]<mini)
                    {
                        mini=nums[j][0];
                        index=j;
                    }
                }
            }
            ans[i]=index;
        }
        return ans;
    }
};