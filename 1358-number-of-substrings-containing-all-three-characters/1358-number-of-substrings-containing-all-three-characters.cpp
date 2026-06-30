class Solution {
public:
    int numberOfSubstrings(string s) {
        int l=0,r=0,ans=0;
        unordered_map<char,int>mpp;
        int n=s.length();
        while(r<s.length())
        {
            mpp[s[r]]++;
            while(mpp.size()==3)
            {
                ans+=(n-r);
                mpp[s[l]]--;
                if(mpp[s[l]]==0) mpp.erase(s[l]);
                l++;
            }
            r++;
        }
        return ans;
        
    }
};