class Solution {
public:
    string largestMerge(string word1, string word2) {
        string ans="";
        int l=0,r=0;
        int size1=word1.length(),size2=word2.length();
        while(l<size1&&r<size2)
        {
            if(word1>word2)
            {
                ans+=word1[0];
                word1.erase(0,1);
                l++;
            }
            else
            {
                ans+=word2[0];
                word2.erase(0,1);
                r++;
            }
        }
        while(word1.length()!=0)
        {
            ans+=word1[0];
            word1.erase(0,1);
        }
        while(word2.length()!=0)
        {
            ans+=word2[0];
            word2.erase(0,1);
        }
        return ans;
    }
};