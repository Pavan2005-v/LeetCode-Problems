class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,ans=0,count=0;
        unordered_map<char,int>mpp;
        while(r<s.length())
        {
            mpp[s[r]]++;
            count=max(count,mpp[s[r]]);
            while((r-l+1)-count>k)
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