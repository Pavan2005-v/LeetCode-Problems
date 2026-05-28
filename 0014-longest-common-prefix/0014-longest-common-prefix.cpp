class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int ind=0;
        int leng=INT_MIN;
        for(string str:strs)
        {
            int len=str.length();
            leng=max(leng,len);
        }
        string ans="";
        while(ind<leng)
        {
            char c=strs[0][ind];
            int k=1;
            for(int i=1;i<strs.size();i++)
            {
                if(strs[i][ind]!=c)
                {
                    k=0;
                    break;
                }
            }
            if(k)
            {
                ans+=c;
            }
            else break;
            ind++;
        }
        return ans;
    }
};