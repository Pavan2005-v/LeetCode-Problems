class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int num=intervals[0][1];
        int ind=0;
        vector<vector<int>>ans;
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]>num)
            {
                ans.push_back({intervals[ind][0],num});
                ind=i;
            }
            num=max(num,intervals[i][1]);
        }
        ans.push_back({intervals[ind][0],num});
        return ans;
    }
};