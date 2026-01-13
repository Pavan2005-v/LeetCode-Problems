class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
            {
                if(find(arr.begin()+i+1,arr.end(),0)!=arr.end()) return true;
            }
            else
            {
                if(find(arr.begin(),arr.end(),2*arr[i])!=arr.end()) return true;
            }
        }
        return false;
    }
};