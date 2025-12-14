class Solution {
public:
    string reversePrefix(string word, char ch) {
        if(word.contains(ch))
        {
            auto it=find(word.begin(),word.end(),ch);
            int index=it-word.begin();
            string ans="";
            for(int i=index;i>=0;i--)
            {
                ans+=word[i];
            }
            for(int i=index+1;i<word.size();i++) ans+=word[i];
            return ans;   
        }
        else return word;
    }
};