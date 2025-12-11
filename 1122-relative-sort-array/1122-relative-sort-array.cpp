class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        for(int i=0;i<arr2.size();i++)
        {
            for(int j=0;j<arr1.size();j++)
            {
                if(arr2[i]==arr1[j]) ans.push_back(arr1[j]);
            }
        }
        vector<int> temp;
        for(int i=0;i<arr1.size();i++)
        {
            if(find(ans.begin(),ans.end(),arr1[i])==ans.end()) temp.push_back(arr1[i]);
        }
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++) ans.push_back(temp[i]);
        return ans;        
    }
};