class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int>mpp;
        int count=0;
        vector<int>ans=arr;
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)
        {
            if(!mpp.contains(ans[i]))
            {
                count++;
            }
            mpp[ans[i]]=count;
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=mpp[arr[i]];
        }
        return arr;
    }
};