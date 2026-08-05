class Solution {
public:
    int numSplits(string s) {
        int n=s.length(),ans=0,count1=0,count2=0;
        vector<int>left(26),right(26);
        for(int i=1;i<n;i++)
        {
            if(right[s[i]-'a']==0) count2++;
            right[s[i]-'a']++;
        }
        for(int i=1;i<n;i++)
        {
            if(left[s[i-1]-'a']==0) count1++;
            left[s[i-1]-'a']++;
            if(count1==count2) ans++;
            right[s[i]-'a']--;
            if(right[s[i]-'a']==0) count2--;
        }
        return ans;
    }
};