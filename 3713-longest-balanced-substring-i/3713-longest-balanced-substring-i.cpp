class Solution {
public:
    int longestBalanced(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            vector<int>temp(26,0);
            for(int j=i;j<s.length();j++)
            {
                temp[s[j]-'a']++;
                int ref=temp[s[j]-'a'];
                int pt=0;
                for(int k=0;k<26;k++)
                {
                    if(temp[k]>0&&temp[k]!=ref)
                    {
                        pt=1;
                        break;
                    }
                }
                if(!pt)
                {
                    ans=max(ans,j-i+1);
                }
            }
        }
        return ans;
    }
};