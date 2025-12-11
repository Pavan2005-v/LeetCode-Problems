class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> mpp;
        for(int i:arr) mpp[i]++;
        vector<int> ans;
        for(auto it:mpp)
        {
            if(it.second==it.first) ans.push_back(it.first);
        }
        if(ans.size()==0) return -1;
        else return ans[ans.size()-1];
    }
};