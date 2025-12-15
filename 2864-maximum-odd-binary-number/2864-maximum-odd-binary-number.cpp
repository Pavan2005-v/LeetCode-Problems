class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ocount=0;
        int zcount=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1') ocount++;
            else zcount++;
        }
        string ans="";
        if(ocount>=1)
        {
            ans+='1';
        }
        for(int i=0;i<zcount;i++)
        {
            ans+='0';
        }
        for(int i=0;i<ocount-1;i++)
        {
            ans+='1';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};