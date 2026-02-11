class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mpp;
        vector<pair<int,string>>nums;
        for(string word:words) mpp[word]++;
        for(auto it:mpp) nums.push_back({it.second,it.first});
        map<int,vector<string>>mpp1;
        for(int i=0;i<nums.size();i++)
        {
            mpp1[nums[i].first].push_back(nums[i].second);
        }
        for(auto &it:mpp1)
        {
            sort(it.second.rbegin(),it.second.rend());
        }
        vector<string>ans;
        for(auto it:mpp1)
        {
            for(int i=0;i<it.second.size();i++)
            {
                ans.push_back(it.second[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        vector<string>ans1;
        for(int i=0;i<k;i++)
        {
            ans1.push_back(ans[i]);
        }
        return ans1;
    }
};