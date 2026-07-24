class Solution {
public:
    bool isVowel(char c)
    {
        return c=='a'||c=='e'||c=='o'||c=='i'||c=='u';
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n=words.size(),m=queries.size();
        vector<int>pref(n),ans(m);
        pref[0]=isVowel(words[0][0])&&isVowel(words[0][words[0].length()-1])?1:0;
        for(int i=1;i<n;i++)
        {
            pref[i]=pref[i-1]+(isVowel(words[i][0])&&isVowel(words[i][words[i].length()-1])?1:0);
        }
        for(int i=0;i<m;i++)
        {
            if(queries[i][0]==0)
            {
                ans[i]=pref[queries[i][1]];
            }
            else
            {
                ans[i]=pref[queries[i][1]]-pref[queries[i][0]-1];
            }
        }
        return ans;
    }
};