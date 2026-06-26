class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int l=0,r=0,count1=0,count2=0,ans=0;
        while(r<answerKey.size())
        {
            if(answerKey[r]=='T') count1++;
            else count2++;
            int count=min(count1,count2);
            if(count>k)
            {
                if(answerKey[l]=='T') count1--;
                else count2--;
                l++;
            }
            if(count<=k) ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};