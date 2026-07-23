class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=0,temp=0;
        for(int i=0;i<gain.size();i++)
        {
            ans+=gain[i];
            temp=max(temp,ans);
        }
        return temp;
    }
};