class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        int i=0;
        while(i<s.length())
        {
            int j=0;
            int k=i;
            while(s[k]==s[k+1]&&k+1<s.length())
            {
                k++;
                j++;
            }
            if(j>=2)
            {
                ans+=s[i];
                ans+=s[i];
                i+=(j+1);
            }
            else
            {
                ans+=s[i];
                i++;
            }
        }
        return ans;
    }
};