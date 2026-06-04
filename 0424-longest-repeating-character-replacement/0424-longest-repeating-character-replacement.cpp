class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,ans=0,sum=0;
        unordered_map<char,int>mpp;
        while(r<s.length())
        {
            mpp[s[r]]++;
            sum++;
            if(mpp.size()>k+1)
            {
                mpp[s[l]]--;
                sum--;
                if(mpp[s[l]]==0) mpp.erase(s[l]);
                l++;
            }
            if(mpp.size()<=k+1)
            {
                int mark=0;
                for(auto it:mpp)
                {
                    if(sum-it.second<=k)
                    {
                        ans=max(ans,r-l+1);
                        mark=1;
                        break;
                    }
                }
                if(!mark)
                {
                    mpp[s[l]]--;
                    sum--;
                    if(mpp[s[l]]==0) mpp.erase(s[l]);
                    l++;
                }
            }
            r++;
        }
        return ans;
    }
};