class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            vector<int>temp(26);
            for(int j=i;j<s.length();j++)
            {
                temp[s[j]-'a']++;
                int maxi=INT_MIN;
                int mini=INT_MAX;
                for(int k=0;k<26;k++)
                {
                    if(temp[k]!=0)
                    {
                        maxi=max(maxi,temp[k]);
                        mini=min(mini,temp[k]);
                    }
                }
                if(maxi!=INT_MIN&&mini!=INT_MAX) ans+=(maxi-mini);
            }
        }
        return ans;
    }
};