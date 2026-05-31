class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int>freq(9);
        int ans=0;
        while(n>0)
        {
            if(n%10) freq[(n%10)-1]++;
            n/=10;
        }
        for(int i=0;i<freq.size();i++)
        {
            ans+=(freq[i]*(i+1));
        }
        return ans;
    }
};