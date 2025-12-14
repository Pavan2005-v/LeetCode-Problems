class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size()<26) return false;
        unordered_map<char,int>mpp;
        for(char c:sentence) mpp[c]++;
        if(mpp.size()<26) return false;
        int count=0;
        for(auto it:mpp)
        {
            count+=it.second;
        }
        if(count<26) return false;
        else return true;
    }
};