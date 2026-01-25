class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mpp;
        for(char c:s) mpp[c]++;
        vector<pair<int,int>>nums;
        for(auto it:mpp)
        {
            nums.emplace_back(it.second,it.first);
        }
        sort(nums.rbegin(),nums.rend());
        string ans="";
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].first;j++) ans+=nums[i].second;
        }
        return ans;
    }
};