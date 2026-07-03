class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>mpp1,mpp2;
        vector<int>ans;
        int l=0,r=p.length()-1;
        for(char c:p) mpp2[c]++;
        for(int i=0;i<p.length();i++)
        {
            mpp1[s[i]]++;
        }
        if(mpp1==mpp2) ans.push_back(0);
        while(r<s.length()-1)
        {
            mpp1[s[l]]--;
            if(mpp1[s[l]]==0) mpp1.erase(s[l]);
            l++;
            r++;
            mpp1[s[r]]++;
            if(mpp1==mpp2) ans.push_back(l);
        }   
        return ans;
    }
};