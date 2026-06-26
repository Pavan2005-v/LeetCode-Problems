class Solution {
public:
    int MaxF(string s,int k,char c)
    {
        int l=0,r=0,count=0,ans=0;
        while(r<s.length())
        {
            if(s[r]==c) count++;
            if(count>k)
            {
                if(s[l]==c) count--;
                l++;
            }
            if(count<=k) ans=max(ans,r-l+1);
            r++;
        }
        return ans;   
    }
    int maxConsecutiveAnswers(string answerKey, int k) {
        return max(MaxF(answerKey,k,'F'),MaxF(answerKey,k,'T'));
    }
};