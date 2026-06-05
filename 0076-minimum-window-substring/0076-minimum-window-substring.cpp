class Solution {
public:
    string minWindow(string s, string t) {
        if(s.length()<t.length()) return "";
        int l=0,r=0,count=0;
        int ind;
        int len=INT_MAX;
        unordered_map<char,int>mpp;
        for(char c:t) mpp[c]++;
        int size=mpp.size();
        while(r<s.length())
        {
            mpp[s[r]]--;
            if(mpp[s[r]]==0) count++;
            while(count==size)
            {
                if(r-l+1<len)
                {
                    len=r-l+1;
                    ind=l;
                }
                mpp[s[l]]++;
                if(mpp[s[l]]>0) count--;
                l++;
            }
            r++;
        }
        if(len==INT_MAX) return "";
        return s.substr(ind,len);
    }
};