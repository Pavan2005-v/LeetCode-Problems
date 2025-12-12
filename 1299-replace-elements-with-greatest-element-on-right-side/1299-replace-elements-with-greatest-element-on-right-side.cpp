class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        if(arr.size()==1)
        {
            ans.push_back(-1);
            return ans;
        }
        for(int i=0;i<arr.size()-2;i++)
        {
            int maxi=*max_element(arr.begin()+i+1,arr.end());
            ans.push_back(maxi);
        }
        ans.push_back(arr[arr.size()-1]);
        ans.push_back(-1);
        return ans;       
    }
};