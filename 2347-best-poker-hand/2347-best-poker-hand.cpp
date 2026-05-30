class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        vector<int>chars(26);
        for(char c:suits)
        {
            chars[c-'a']++;
        }
        for(int i:chars)
        {
            if(i>=5) return "Flush";
        }
        unordered_map<int,int>mpp;
        for(int i:ranks)
        {
            mpp[i]++;
            if(mpp[i]==3) return "Three of a Kind";
        }
        for(auto it:mpp)
        {
            if(it.second==2) return "Pair";
        }
        return "High Card";
    }
};