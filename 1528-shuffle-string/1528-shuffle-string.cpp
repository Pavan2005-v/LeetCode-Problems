class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans="";
        vector<char> temp(indices.size());
        for(int i=0;i<indices.size();i++)
        {
            temp[indices[i]]=s[i];
        }
        for(int i=0;i<temp.size();i++)
        {
            ans+=(temp[i]);
        }
        return ans;
    }
};