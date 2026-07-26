class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
        int n1=series1.size(),n2=series2.size(),i=0,j=0;
        vector<vector<int>>res;
        while(i<n1 && j<n2){
            if(series1[i][0]==series2[j][0]){
                res.push_back({series1[i][0],series1[i][1]+series2[j][1]});
                i++;
                j++;
            }
            else if(series1[i][0]<series2[j][0]){
                res.push_back({series1[i][0],series1[i][1]+series2[j][1]});
                i++;
            }
            else{
                res.push_back({series2[j][0],series1[i][1]+series2[j][1]});
                j++;
            }
        }
        while(i<n1){
            res.push_back({series1[i][0],series1[i][1]});
            i++;
        }
        while(j<n2){
            res.push_back({series2[j][0],series2[j][1]});
            j++;
        }
        return res;
    }
};