class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            vector<int>temp(26,0);
            int maxi=0;
            for(int j=i;j<s.length();j++)
            {
                int mini=INT_MAX;
                temp[s[j]-'a']++;
                maxi=max(maxi,temp[s[j]-'a']);
                for(int k=0;k<26;k++)
                {
                    if(temp[k]!=0)
                    {
                        mini=min(mini,temp[k]);
                    }
                }
                sum+=(maxi-mini);
            }
        }
        return sum;

    }
};