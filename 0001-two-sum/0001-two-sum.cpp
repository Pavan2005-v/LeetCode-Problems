class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        unordered_map<int,int>mpp;
        for(int i=0;i<n.size();i++)
        {
            int com=target-n[i];
            if(mpp.contains(n[i]))
            {
                return {mpp[n[i]],i};
            }
            else mpp[com]=i;
        }
        return {};
    }
};