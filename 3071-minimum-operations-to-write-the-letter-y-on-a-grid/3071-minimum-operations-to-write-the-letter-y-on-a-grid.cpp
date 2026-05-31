class Solution {
public:
    int minimumOperationsToWriteY(vector<vector<int>>& grid) {
        int center=grid.size()/2;
        vector<int>y(3);
        vector<int>z(3);
        int ind=0,n=grid[0].size();
        while(ind<=center)
        {
            if(grid[ind][ind]==0) y[0]++;
            else if(grid[ind][ind]==1) y[1]++;
            else if(grid[ind][ind]==2) y[2]++;
            ind++;
        }
        ind=n-1;
        int ind1=0;
        while(ind>center&&ind1<center)
        {
            if(grid[ind1][ind]==0) y[0]++;
            else if(grid[ind1][ind]==1) y[1]++;
            else if(grid[ind1][ind]==2) y[2]++;
            ind--;
            ind1++;
        }
        ind1=center+1;
        while(ind1<grid.size())
        {
            if(grid[ind1][ind]==0) y[0]++;
            else if(grid[ind1][ind]==1) y[1]++;
            else if(grid[ind1][ind]==2) y[2]++;
            ind1++;           
        }
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==0) z[0]++;
                else if(grid[i][j]==1) z[1]++;
                else if(grid[i][j]==2) z[2]++;
            }
        }
        z[0]=z[0]-y[0];
        z[1]=z[1]-y[1];
        z[2]=z[2]-y[2];
        int ysum=0;
        int zsum=0;
        for(int i:y) ysum+=i;
        for(int i:z) zsum+=i;
        vector<pair<int,int>>pr1;
        vector<pair<int,int>>pr2;
        pr1.push_back({y[0],0});
        pr1.push_back({y[1],1});
        pr1.push_back({y[2],2});
        pr2.push_back({z[0],0});
        pr2.push_back({z[1],1});
        pr2.push_back({z[2],2});
        sort(pr1.rbegin(),pr1.rend());
        sort(pr2.rbegin(),pr2.rend());
        int ans=0;
        if(pr1[0].second!=pr2[0].second)
        {
            ans+=(ysum-pr1[0].first);
            ans+=(zsum-pr2[0].first);
        }
        else
        {
            ans+=(ysum-pr1[0].first);
            ans+=(zsum-pr2[1].first);
            int temp=((ysum-pr1[1].first)+(zsum-pr2[0].first));
            ans=min(ans,temp);
        }
        // for(int i=0;i<pr1.size();i++) cout<<pr1[i].first<<" "<<pr1[i].second<<endl;
        // cout<<"============="<<endl;
        // for(int i=0;i<pr2.size();i++) cout<<pr2[i].first<<" "<<pr2[i].second<<endl;
        return ans;
    }
};