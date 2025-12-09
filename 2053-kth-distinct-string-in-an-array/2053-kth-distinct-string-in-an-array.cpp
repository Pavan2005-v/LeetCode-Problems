class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mpp;
        for(string s:arr) mpp[s]++;
        vector<string> temp;
        for(auto it:mpp)
        {
            if(it.second==1) temp.push_back(it.first);
        }
        vector<int> ans;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=0;j<temp.size();j++)
            {
                if(arr[i]==temp[j])
                {
                    ans.push_back(i);
                    break;
                }
            }
        }
        //reverse(ans.begin(),ans.end());
        for(int i:ans) cout<<i<<" ";
        if(k>ans.size()) return "";
        else return arr[ans[k-1]];        
    }
};