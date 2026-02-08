class Solution {
public:
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) {
        vector<pair<int,int>>nums;
        for(int i=0;i<x.size();i++) nums.emplace_back(y[i],x[i]);
        sort(nums.rbegin(),nums.rend());
        unordered_set<int>temp;
        int sum=0;
        for(auto it:nums)
        {
            if(!temp.contains(it.second))
            {
                sum+=it.first;
                temp.insert(it.second);
            }
            if(temp.size()==3) return sum;
        }
        return -1;
    }
};