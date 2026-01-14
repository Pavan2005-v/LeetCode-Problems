class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        vector<string>dup=strs;
        for(string &str:dup)
        {
            sort(str.begin(),str.end());
        }
        vector<int>temp(dup.size());
        for(int i=0;i<dup.size();i++)
        {
            vector<string>t;
            if(temp[i]!=1) t.push_back(strs[i]);
            for(int j=i+1;j<dup.size();j++)
            {
                if(dup[i]==dup[j]&&temp[j]!=1)
                {
                    t.push_back(strs[j]);
                    temp[j]=1;
                }
            }
            if(!t.empty()) ans.push_back(t);
        }
        return ans;
    }
};