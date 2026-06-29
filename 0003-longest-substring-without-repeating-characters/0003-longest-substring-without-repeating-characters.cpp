class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,ans=0;
        unordered_map<char,int>mpp;
        while(r<s.length())
        {
            mpp[s[r]]++;
            int count=mpp[s[r]];
            while(count>1)
            {
                if(s[l]==s[r]) count--;
                mpp[s[l]]--;
                if(mpp[s[l]]==0) mpp.erase(s[l]);
                l++;
            }
            if(mpp.size()==r-l+1) ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};