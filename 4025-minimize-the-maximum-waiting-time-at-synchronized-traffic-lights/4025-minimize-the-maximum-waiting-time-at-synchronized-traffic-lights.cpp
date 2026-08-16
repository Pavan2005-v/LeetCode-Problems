class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int n=arrivalTime.size(),m=lights.size(),ans=INT_MIN;
        sort(lights.begin(),lights.end());
        for(int i=0;i<n;i++)
            {
                int p=arrivalTime[i]%period;
                if(p>=lights[m-1])
                {
                    ans=max(ans,period-p);
                }    
            }
        if(ans==INT_MIN) return 0;
        return ans;
    }
};