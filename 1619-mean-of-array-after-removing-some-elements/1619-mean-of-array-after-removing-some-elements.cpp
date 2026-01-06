class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int percent=(0.05)*arr.size();
        int size=arr.size()-(2*percent);
        double ans=0;
        cout<<percent<<endl;
        for(int i=percent;i<arr.size()-percent;i++)
        {
            cout<<arr[i]<<" ";
            ans+=arr[i];
        }
        return ans/(double)size;
    }
};