class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i:nums) mpp[i]++;
        vector<pair<int,int>> pr;
        for(auto it:mpp)
        {
            pr.push_back({it.second,it.first});
        }
        sort(pr.begin(),pr.end(),[&](auto &a,auto &b)
        {
            if(a.first==b.first)
            {
                return a.second>b.second;
            }
            else return a.first<b.first;
        });
        nums.clear();
        for(auto it:pr)
        {
            for(int i=0;i<it.first;i++)
            {
                nums.push_back(it.second);
            }
        }
        return nums;
    }
};