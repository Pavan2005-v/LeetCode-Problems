class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,ans=0;
        unordered_map<char,int>mpp;
        int maxfreq=0;
        while(r<s.length())
        {
            mpp[s[r]]++;
            maxfreq=max(maxfreq,mpp[s[r]]);
            if((r-l+1)-maxfreq<=k)
            {
                ans=max(ans,r-l+1);
            }
            else{
                mpp[s[l]]--;
                if(mpp[s[l]]==0) mpp.erase(s[l]);
                l++;
            }
            r++;
        }
        return ans;
    }
};