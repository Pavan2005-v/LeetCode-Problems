class Solution {
public:
    bool validPalindrome(string s) {
        int l=0,r=s.length()-1,count1=-1,count2=-1;
        while(l<r)
        {
            if(s[l]!=s[r])
            {
                count1=l;
                count2=r;
                break;
            }
            else l++; r--;
        }
        if(l>=r) return true;
        l++;
        while(l<r)
        {
            if(s[l]!=s[r])
            {
                break;
            }
            else
            {
                l++; r--;
            }
        }
        if(l>=r) return true;
        l=count1;
        r=count2-1;
        while(l<r)
        {
            if(s[l]!=s[r])
            {
                return false;
            }
            else
            {
                l++; r--;
            }
        }
        return true;
    }
};