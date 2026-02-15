class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
           if(i+k<=nums.size())
           {
                unordered_map<int,int>mpp;
                int count=x;
                int sum=0;
                for(int j=i;j<i+k;j++)
                {
                    mpp[nums[j]]++;
                }
                priority_queue<pair<int,int>>pq;
                for(auto it:mpp)
                {
                    pq.push({it.second,it.first});
                }
                while(count--&&pq.size()>0)
                {
                    sum+=(pq.top().first*pq.top().second);
                    pq.pop();
                }
                ans.push_back(sum);
           }
        }
        return ans;
    }
};