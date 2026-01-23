class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        map<double,vector<int>>mpp;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                mpp[arr[i]/(double)arr[j]]={arr[i],arr[j]};
            }
        }
        int c=0;
        for(auto it:mpp)
        {
            c++;
            if(c==k)
            {
                return it.second;
            }
        }
        return {};
    }
};