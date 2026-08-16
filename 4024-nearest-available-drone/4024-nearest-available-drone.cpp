class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int n=drones.size(),ans=INT_MAX,ind=n-1;
        for(int i=0;i<n;i++)
            {
                int sum=abs(drones[i][0]-target[0])+abs(drones[i][1]-target[1]);
                if(sum<=drones[i][2])
                {
                   if(ans>sum)
                   {
                        ans=sum;
                        ind=i;
                   }
                }
            }
        if(ans==INT_MAX) return -1;
        return ind;
    }
};