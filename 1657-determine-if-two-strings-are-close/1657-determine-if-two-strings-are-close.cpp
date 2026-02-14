class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()) return false;
        unordered_map<char,int>mpp1;
        unordered_map<char,int>mpp2;
        for(char c:word1) mpp1[c]++;
        for(char c:word2) mpp2[c]++;
        for(auto it:mpp1)
        {
            if(!mpp2.contains(it.first)) return false;
        }
        for(auto it:mpp2)
        {
            if(!mpp1.contains(it.first)) return false;
        }
        vector<int>temp1;
        vector<int>temp2;
        for(auto it:mpp1) temp1.push_back(it.second);
        for(auto it:mpp2) temp2.push_back(it.second);
        sort(temp1.begin(),temp1.end());
        sort(temp2.begin(),temp2.end());
        for(int i=0;i<temp1.size();i++)
        {
            if(temp1[i]!=temp2[i]) return false;
        }
        return true;
    }
};