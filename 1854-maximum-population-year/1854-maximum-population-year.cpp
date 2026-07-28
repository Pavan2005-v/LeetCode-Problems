class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int n=logs.size();
        vector<pair<int,int>>pr;
        for(int i=0;i<n;i++)
        {
            pr.push_back({logs[i][0],1});
            pr.push_back({logs[i][1],-1});
        }
        sort(pr.begin(),pr.end());
        int ans=pr[0].second,temp=pr[0].second,yr=pr[0].first;
        for(int i=1;i<pr.size();i++)
        {
            ans+=pr[i].second;
            if(ans>temp)
            {
                temp=ans;
                yr=pr[i].first;
            }
        }
        return yr;
    }
};