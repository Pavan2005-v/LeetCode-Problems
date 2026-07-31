class Solution {
public:
    int minimumPushes(string word) {
        int count=0,add=1,ans=0;
        for(char c:word)
        {
            ans+=add;
            count++;
            if(count==8)
            {
                add++;
                count=0;
            }
        }
        return ans;
    }
};