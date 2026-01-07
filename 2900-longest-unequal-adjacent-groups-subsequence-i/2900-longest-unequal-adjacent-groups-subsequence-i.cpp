class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<int>temp;
        vector<int>index;
        vector<string>ans;
        temp.push_back(groups[0]);
        index.push_back(0);
        int c=0;
        for(int i=1;i<groups.size();i++)
        {
            if(groups[i]!=temp[c])
            {
                temp.push_back(groups[i]);
                index.push_back(i);
                c++;
            }
        }
        for(int i=0;i<index.size();i++)
        {
            ans.push_back(words[index[i]]);
        }
        return ans;
    }
};