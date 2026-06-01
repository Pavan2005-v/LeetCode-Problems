class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mpp;
        int l=0,r=0;
        int ans=0;
        while(r<s.length())
        {
            if(!mpp.contains(s[r]))
            {
                ans=max(ans,r-l+1);
            }
            else
            {
                if(mpp[s[r]]>=l) 
                {
                    l=mpp[s[r]]+1;
                }
                else
                {
                    ans=max(ans,r-l+1);
                }
            }
            mpp[s[r]]=r;
            r++;
        }
        return ans;
    }
};