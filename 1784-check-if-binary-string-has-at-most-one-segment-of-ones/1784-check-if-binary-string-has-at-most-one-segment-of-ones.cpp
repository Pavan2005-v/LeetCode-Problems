class Solution {
public:
    bool checkOnesSegment(string s) {
        int ind=-1;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                ind=i;
                break;
            }
        }
        if(ind==-1) return false;
        for(int i=ind;i>=0;i--)
        {
            if(s[i]=='0') return false;
        }
        return true;
    }
};