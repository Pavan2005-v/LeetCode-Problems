class Solution {
public:
    string largestMerge(string word1, string word2) {
        string ans="";
        int l=0,r=0;
        while(l<word1.length()&&r<word2.length())
        {
            if(word1.substr(l)>word2.substr(r))
            {
                ans+=word1[l];
                l++;
            }
            else
            {
                ans+=word2[r];
                r++;
            }
        }
        while(l<word1.length())
        {
            ans+=word1[l];
            l++;
        }
        while(r<word2.length())
        {
            ans+=word2[r];
            r++;
        }
        return ans;
    }
};