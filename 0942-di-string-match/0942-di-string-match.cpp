class Solution {
public:
    vector<int> diStringMatch(string s) {
        int c=0;
        vector<int>ans(s.length()+1);
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='I')
            {
                ans[i]=c;
                c++;
            }
        }
        c=s.length();
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='D')
            {
                ans[i]=c;
                c--;
            }
        }
        int sum=(s.length()*(s.length()+1))/2;
        int temp=0;
        for(int i:ans) temp+=i;
        ans[ans.size()-1]=sum-temp;
        return ans;
    }
};