class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        int temp=intervals[0][1];
        int ind=0;
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]>temp)
            {
                ans.push_back({intervals[ind][0],temp});
                ind=i;
                temp=intervals[i][1];
            }
            temp=max(temp,intervals[i][1]);
        }
        int n=intervals.size()-1;
        if(ind!=n)
        {
            ans.push_back({intervals[ind][0],temp});
        }
        else
        {
            ans.push_back({intervals[n][0],temp});
        }
        return ans;
    }
};