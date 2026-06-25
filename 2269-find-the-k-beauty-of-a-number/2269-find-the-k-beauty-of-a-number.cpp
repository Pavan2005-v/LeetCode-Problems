class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        string win="";
        long long n=0;
        for(int i=0;i<k;i++)
        {
            win+=(s[i]);
        }
        int l=0,r=k-1,ans=0;
        n=stoi(win);
        if(n!=0&&num%n==0) ans++;
        while(r<s.length()-1)
        {
            l++;
            r++;
            win=s.substr(l,r-l+1);
            n=stoi(win);
            if(n!=0&&num%n==0) ans++;
        }
        return ans;
        
    }
};