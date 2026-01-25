class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string>word1;
        string word;
        while(ss>>word)
        {
            word1.push_back(word);
        }
        reverse(word1.begin(),word1.end());
        string ans="";
        for(int i=0;i<word1.size()-1;i++)
        {
            ans+=(word1[i]+' ');
        }
        ans+=word1[word1.size()-1];
        return ans;
    }
};