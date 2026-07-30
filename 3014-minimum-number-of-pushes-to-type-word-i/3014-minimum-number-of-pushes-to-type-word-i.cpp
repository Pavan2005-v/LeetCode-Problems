class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>mpp;
        int count=0;
        int assign=1;
        for(int i=0;i<word.length();i++)
        {
            if(!mpp.contains(word[i]))
            {
                mpp[word[i]]=assign;
                count++;
            }
            if(count==8)
            {
                assign++;
                count=0;
            }
        }
        int ans=0;
        for(char c:word)
        {
            ans+=mpp[c];
        }
        return ans;
    }
};