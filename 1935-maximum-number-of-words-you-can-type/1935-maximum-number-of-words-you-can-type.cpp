class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<string> ans;
        stringstream ss(text);
        string word;
        while(ss>>word)
        {
            ans.push_back(word);
        }
        int count=0;
        for(string s:ans)
        {
            int k=0;
            for(char c:brokenLetters)
            {
                if(s.contains(c))
                {
                    k=1;
                    break;
                }
            }
            if(!k) count++;
        }
        return count;
    }
};