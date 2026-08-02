class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int maxi=0;
        for(auto it:ranges)
        {
            maxi=max(maxi,it[1]);
        }
        vector<int>diff(maxi);
        for(int i=0;i<ranges.size();i++)
        {
            diff[ranges[i][0]-1]+=1;
            if(ranges[i][1]<diff.size())
            {
                diff[ranges[i][1]]-=1;
            }
        }
        for(int i=1;i<diff.size();i++)
        {
            diff[i]+=diff[i-1];
        }
        for(int i=left;i<=right;i++)
        {
            if(i>diff.size()) return false;
            if(diff[i-1]<1) return false;
        }
        return true;
    }
};