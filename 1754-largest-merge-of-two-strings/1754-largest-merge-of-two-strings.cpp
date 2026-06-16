class Solution {
public:
    string largestMerge(string word1, string word2) {
        string ans="";
        int l=0,r=0;
        while(l<word1.length()||r<word2.length())
        {
            if(l<word1.length()&&r<word2.length()&&word1[l]>word2[r])
            {
                ans+=word1[l];
                l++;
            }
            else if(l<word1.length()&&r<word2.length()&&word1[l]<word2[r])
            {
                ans+=word2[r];
                r++;
            }
            else
            {
                string temp1=word1.substr(l);
                string temp2=word2.substr(r);
                if(temp1>temp2)
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
        }
        return ans;
    }
};