class Solution {
public:
    int maxVowels(string s, int k) {
        int l=0,r=k-1,ans=0,count=0;
        for(int i=0;i<=r;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') count++;
        }
        ans=count;
        while(r<s.length()-1)
        {
            if(s[l]=='a'||s[l]=='e'||s[l]=='i'||s[l]=='o'||s[l]=='u') count--;
            l++;
            r++;
            if(s[r]=='a'||s[r]=='e'||s[r]=='i'||s[r]=='o'||s[r]=='u') count++;
            ans=max(ans,count);
        }
        return ans;
    }
};