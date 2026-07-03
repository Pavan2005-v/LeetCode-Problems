class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int l=0,r=0,ans=0,n=s.length();
        unordered_map<char,int>mpp;
        while(r<s.length())
        {
            mpp[s[r]]++;
            while(mpp[s[r]]>=k)
            {
                ans+=(n-r);
                mpp[s[l]]--;
                l++;
            }
            r++;
        }
        return ans;
    }
};