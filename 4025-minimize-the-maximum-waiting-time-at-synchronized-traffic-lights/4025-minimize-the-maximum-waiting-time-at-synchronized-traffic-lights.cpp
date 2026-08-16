class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int n=arrivalTime.size(),m=lights.size(),maxi=0,ans=INT_MIN;
        for(int i:lights)
        {
            maxi=max(maxi,i);
        }
        for(int i=0;i<n;i++)
            {
                int p=arrivalTime[i]%period;
                if(p>=maxi)
                {
                    ans=max(ans,period-p);
                }    
            }
        if(ans==INT_MIN) return 0;
        return ans;
    }
};