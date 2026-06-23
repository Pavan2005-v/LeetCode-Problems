class Solution {
public:
    bool validPalindrome(string s) {
        int l=0,r=s.length()-1,limit=0,k=0;
        while(l<=r)
        {
            if(s[l]!=s[r])
            {
                limit++;
                k=1;
                break;
            }
            l++;
            r--;
        }
        if(limit>1) return false;
        if(!k) return true;
        string temp=s;
        int ind=r;
        s.erase(l,1);
        l=0,r=s.length()-1,k=0;
        while(l<=r)
        {
            if(s[l]!=s[r])
            {
                k=1;
                break;
            }
            l++;
            r--; 
        }
        if(!k) return true;
        r=ind;
        temp.erase(r,1);
        l=0,r=temp.length()-1;
        while(l<=r)
        {
            if(temp[l]!=temp[r]) return false;
            l++;
            r--; 
        }
        return true;
    }
};