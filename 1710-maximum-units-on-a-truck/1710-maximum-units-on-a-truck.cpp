class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        vector<pair<int,int>>vect1;
        for(int i=0;i<boxTypes.size();i++)
        {
            vect1.push_back({boxTypes[i][1],boxTypes[i][0]}); 
        }
        sort(vect1.rbegin(),vect1.rend());
        int count=0;
        int boxSize=0;
        for(int i=0;i<vect1.size();i++)
        {
            if(count<truckSize)
            {
                count+=vect1[i].second;
                if(count>truckSize)
                {
                    boxSize+=(vect1[i].first*(truckSize-(count-vect1[i].second)));
                    count=truckSize;
                }
                else boxSize+=(vect1[i].first*vect1[i].second);
            }
        }
        return boxSize;

    }
};