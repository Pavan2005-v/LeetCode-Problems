class Solution {
public:
    vector<int> diStringMatch(string s) {
        int num=0,n=s.length();
        vector<int>ans(n+1);
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='I')
            {
                ans[i]=num;
                num++;
            }
        }
        ans[n]=num;
        num++;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='D')
            {
                ans[i]=num;
                num++;
            }
        }
        return ans;
    }
};