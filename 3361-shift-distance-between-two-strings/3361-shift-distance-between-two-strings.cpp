class Solution {
public:
    long long shiftDistance(string s, string t, vector<int>& nextCost, vector<int>& previousCost) {
        //a[i]<t[i]
        //a[i]>t[i] ex: d b
        long long ans=0;
        int n=s.length();
        // for(int i=0;i<26;i++)
        // {
        //     cout<<(char)(i+'a')<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<26;i++)
        // {
        //     cout<<nextCost[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<26;i++)
        // {
        //     cout<<previousCost[i]<<" ";
        // }
        vector<long long>pref(26),suff(26);
        pref[0]=nextCost[0];
        suff[0]=previousCost[0];
        for(int i=1;i<26;i++)
        {
            pref[i]=(long long)(nextCost[i]+pref[i-1]);
            suff[i]=(long long )(previousCost[i]+suff[i-1]);
        }
        for(int i=0;i<n;i++)
        {
            long long sum1=0,sum2=0;
            if(s[i]<t[i])
            {
                if(s[i]-'a'==0)
                {
                    sum1=pref[t[i]-'a'-1];
                }
                else
                {
                    sum1=pref[t[i]-'a'-1]-pref[s[i]-'a'-1];
                }
                if(t[i]=='z')
                {
                    sum2=suff[s[i]-'a'];
                }
                else
                {
                    sum2=suff[s[i]-'a']+(suff['z'-'a']-suff[t[i]-'a']);
                }
            }
            else if(s[i]>t[i])
            {
                //l a
                if(t[i]-'a'==0)
                {
                    sum1=pref['z'-'a']-pref[s[i]-'a'-1];
                }
                else
                {
                    sum1=(pref['z'-'a']-pref[s[i]-'a'-1])+pref[t[i]-'a'-1];
                }
                //z a
                sum2=suff[s[i]-'a']-suff[t[i]-'a'];
            }
            if(s[i]!=t[i]) ans+=min(sum1,sum2);
        }
        return ans;
    }
};