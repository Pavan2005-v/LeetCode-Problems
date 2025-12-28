class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char,int>mpp;
        unordered_map<char,int>mpp1;
        for(char c:word1) mpp[c]++;
        for(char c:word2) mpp1[c]++;
        for(char c:word1)
        {
            if(mpp1.contains(c))
            {
                if(abs(mpp1[c]-mpp[c])>3) return false;
            }
            else if(mpp[c]>3) return false;
        }
        for(char c:word2)
        {
            if(mpp.contains(c))
            {
                if(abs(mpp1[c]-mpp[c])>3) return false;
            }
            else if(mpp1[c]>3) return false;
        }
        return true;
    }
};