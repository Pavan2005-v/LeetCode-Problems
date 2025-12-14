class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>> ans;
        ans.push_back({});
        int count=0;
        for(int num:nums)
        {
            int n=ans.size();
            for(int i=0;i<n;i++)
            {
                vector<int>newS=ans[i];
                newS.push_back(num);
                ans.push_back(newS);
            }
        }
        for(auto s:ans)
        {
            int count1=0;
            for(int x:s)
            {
                count1^=x;
            }
            count+=count1;
        }
        return count;
    }
};