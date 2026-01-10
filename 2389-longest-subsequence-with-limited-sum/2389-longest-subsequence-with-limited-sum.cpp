class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<queries.size();i++)
        {
            int limit=queries[i];
            int sum=0;
            int c=0;
            int k=0;
            for(int j=0;j<nums.size();j++)
            {
                if(sum+nums[j]<=limit)
                {
                    sum+=nums[j];
                    c++;
                }
                else
                {
                    k=max(k,c);
                    c=0;
                    sum=0;
                }
            }
            k=max(k,c);
            ans.push_back(k);
        }  
        return ans;     
    }
};