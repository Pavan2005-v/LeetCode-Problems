class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int num=arr[(arr.size()-1)/2];
        sort(arr.begin(),arr.end(),[&](int& a,int& b){
            if(abs(a-num)==abs(b-num))
            {
                return a>b;
            }
            return abs(a-num)>abs(b-num);
        });
        vector<int>ans;
        for(int i=0;i<k;i++) ans.push_back(arr[i]);
        return ans;
    }
};