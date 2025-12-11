class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string>ans;
        for(int i=0;i<words.size();i++)
        {
            string word="";
            for(int j=0;j<words[i].size();j++)
            {
                if(words[i][j]!=separator)
                {
                    word+=words[i][j];
                }
                else if(words[i][j]==separator)
                {
                    if(!word.empty())ans.push_back(word);
                    word="";
                }
            }
            if(!word.empty())ans.push_back(word);
        }
        return ans;
    }
};