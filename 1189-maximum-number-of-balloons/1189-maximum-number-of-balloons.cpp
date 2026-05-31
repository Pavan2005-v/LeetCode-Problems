class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mpp;
        for(char c:text)
        {
            if(c=='b'||c=='a'||c=='l'||c=='o'||c=='n') mpp[c]++;
        }
        if(mpp.size()!=5) return 0;
        int num=INT_MAX;
        for(auto it:mpp)
        {
            num=min(num,it.second);
        }
        if(mpp['l']>=2*num&&mpp['o']>=2*num) return num;
        return min(mpp['l']/2,mpp['o']/2);
    }
};