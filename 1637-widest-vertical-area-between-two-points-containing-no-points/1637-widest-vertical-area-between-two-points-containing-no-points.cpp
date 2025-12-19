class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int>temp;
        for(int i=0;i<points.size();i++)
        {
            temp.push_back(points[i][0]);
        }
        sort(temp.begin(),temp.end());
        int maxi=INT_MIN;
        for(int i=1;i<temp.size();i++)
        {
            maxi=max(maxi,temp[i]-temp[i-1]);
        }
        return maxi;
    }
};