class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int ans=0;
        vector<vector<int>>temp;
        temp.push_back({});
        for(int i=0;i<nums.size();i++)
        {
            int size=temp.size();
            for(int j=0;j<size;j++)
            {
                vector<int>temp1=temp[j];
                temp1.push_back(nums[i]);
                temp.push_back(temp1);
            }
        }
        for(int i=0;i<temp.size();i++)
        {
            int x=0;
            for(int j=0;j<temp[i].size();j++)
            {
                x^=temp[i][j];
            }
            ans+=x;
        }
        return ans;
    }
};