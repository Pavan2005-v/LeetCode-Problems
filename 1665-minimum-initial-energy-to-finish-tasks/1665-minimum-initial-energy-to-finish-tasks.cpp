class Solution {
public:
    bool isValid(vector<vector<int>>tasks,int val)
    {
        for(int i=0;i<tasks.size();i++)
        {
            if(val>=tasks[i][1]) val-=tasks[i][0];
            else return false;
        }
        if(val>=0) return true;
        return false;
    }
    int minimumEffort(vector<vector<int>>& tasks) {
        for(int i=0;i<tasks.size();i++)
        {
            tasks[i].push_back(tasks[i][1]-tasks[i][0]);
        }
        sort(tasks.begin(),tasks.end(),[](vector<int>&a,vector<int>&b){
            return a[2]>b[2];
        });
        int sum=0,ans=INT_MAX;
        for(int i=0;i<tasks.size();i++)
        {
            sum+=tasks[i][0];
        }
        int l=sum;
        int r=1000000000;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(isValid(tasks,mid))
            {
                ans=min(ans,mid);
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return ans;
    }
};