class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int sum=0;
        vector<pair<int,int>>nums;
        for(int i=0;i<profit.size();i++)
        {
            nums.push_back({profit[i],difficulty[i]});
        }
        sort(nums.begin(),nums.end());
        for(int k=0;k<worker.size();k++)
        {
            int i=0;
            int j=nums.size()-1;
            int ele=0;
            while(i<=j)
            {
                int mid=i+(j-i)/2;
                if(worker[k]>=nums[mid].second)
                {
                    ele=nums[mid].first;
                    i=mid+1;
                }
                else j=mid-1;
            }
            sum+=ele;
        }
        return sum;
    }
};