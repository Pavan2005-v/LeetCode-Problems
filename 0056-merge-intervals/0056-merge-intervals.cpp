class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        int temp=intervals[0][1];
        int ind=0;
        int num=intervals[0][1];
        for(auto it:intervals)
        {
            for(int i:it) cout<<i<<" ";
            cout<<endl;
        }
        for(int i=0;i<intervals.size();i++)
        {
            if(intervals[i][0]>temp)
            {
                ans.push_back({intervals[ind][0],num});
                ind=i;
                num=0;
            }
            temp=max(temp,intervals[i][1]);
            num=max(num,intervals[i][1]);
        }
        int n=intervals.size()-1;
        if(ind!=n)
        {
            ans.push_back({intervals[ind][0],num});
        }
        else
        {
            ans.push_back({intervals[n][0],num});
        }
        return ans;
    }
};