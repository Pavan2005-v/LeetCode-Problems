class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ans={0};
        for(int i=0;i<gain.size();i++)
        {
            ans.push_back(ans[ans.size()-1]+gain[i]);
        }
        int maxi=*max_element(ans.begin(),ans.end());
        return maxi;        
    }
};