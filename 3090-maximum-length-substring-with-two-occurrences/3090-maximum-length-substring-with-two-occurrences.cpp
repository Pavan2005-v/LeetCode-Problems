class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.length(),l=0,r=0,ans=0;
        unordered_map<char,int>mpp;
        while(r<n)
        {
            mpp[s[r]]++;
            while(mpp[s[r]]>2)
            {
                mpp[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};