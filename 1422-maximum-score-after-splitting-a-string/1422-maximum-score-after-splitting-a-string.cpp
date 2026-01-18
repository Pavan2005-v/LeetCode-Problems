class Solution {
public:
    int maxScore(string s) {
        int ans=0;
        vector<int>ps(s.length());
        if(s[s.length()-1]=='1') ps[s.length()-1]=1;
        else ps[s.length()-1]=0;
        for(int i=s.length()-2;i>=0;i--)
        {
            if(s[i]=='1') ps[i]=ps[i+1]+1;
            else ps[i]=ps[i+1];
        }
        for(int i:ps) cout<<i<<" ";
        int c=0;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]=='0')
            {
                c++;
            }
            ans=max(ans,c+ps[i+1]);
        }
        return ans;
    }
};