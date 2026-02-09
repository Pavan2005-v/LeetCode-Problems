class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        vector<int>temp(points.size());
        sort(points.begin(),points.end(),[](const vector<int>&x,const vector<int>&y)
        {
            if(x[1]==y[1]) return x[0]<y[0];
            return x[1]<y[1];
        });
        int ans=0;
        for(int i=0;i<points.size();i++)
        {
            if(!temp[i])
            {
                int ele=points[i][1];
                for(int j=i+1;j<points.size();j++)
                {
                    if(!temp[j])
                    {
                        if(points[j][0]<=ele&&points[j][1]>=ele)
                        {
                            temp[j]=1;
                        }
                    }
                }
                temp[i]=1;
                ans++;
            }
        }
        return ans;
    }
};