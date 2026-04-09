class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int ans=0;
        const long long int MOD=1000000007;
        for(int i=0;i<queries.size();i++)
        {
            for(int j=queries[i][0];j<=queries[i][1];j+=queries[i][2])
            {
                nums[j]=((long long)nums[j]*queries[i][3])%MOD;
            }
        }
        for(int i:nums) ans^=i;
        return ans;
    }
};