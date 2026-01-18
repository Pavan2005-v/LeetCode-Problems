class Solution {
public:
    int maxScore(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            int one=0;
            int zero=0;
            for(int k=0;k<=i;k++)
            {
                if(s[k]=='0') zero++;
            }
            for(int j=i+1;j<s.length();j++)
            {
                if(s[j]=='1') one++;
            }
            if(one==0) ans=max(ans,zero-1);
            else if(zero==0) ans=max(ans,one);
            else ans=max(ans,one+zero);
        }
        return ans;
    }
};