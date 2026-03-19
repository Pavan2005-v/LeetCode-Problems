class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int>mpp1;
        unordered_map<char,int>mpp2;
        for(char c:s) mpp1[c]++;
        for(char c:t) mpp2[c]++;
        for(auto it:mpp1)
        {
            if(mpp2.contains(it.first))
            {
                if(mpp1[it.first]!=mpp2[it.first]) return false;
            }
            else return false;
        }
        for(auto it:mpp2)
        {
            if(mpp1.contains(it.first))
            {
                if(mpp1[it.first]!=mpp2[it.first]) return false;
            }
            else return false;
        }
        return true;
    }
};