class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int> maxLength;
        for(int i=0;i<rectangles.size();i++)
        {
            int mini=*min_element(rectangles[i].begin(),rectangles[i].end());
            maxLength.push_back(mini);
        }
        int maxi=*max_element(maxLength.begin(),maxLength.end());
        int count=0;
        for(int i:maxLength)
        if(i==maxi) count++;
        return count;       
    }
};