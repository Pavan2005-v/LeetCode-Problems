class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        for(int i=0;i<words.size();i++)
        {
            unordered_map<char,char>mpp1;
            unordered_map<char,char>mpp2;
            string temp=words[i];
            for(int i=0;i<temp.size();i++)
            {
                mpp1[temp[i]]=pattern[i];
                mpp2[pattern[i]]=temp[i];
            }
            int k=1;
            for(int i=0;i<temp.size();i++)
            {
                if((mpp1[temp[i]]!=pattern[i])||mpp2[pattern[i]]!=temp[i])
                {
                    k=0;
                    break;
                }
            }
            if(k) ans.push_back(words[i]);
        }
        return ans;
    }
};