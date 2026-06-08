class Solution {
public:
    bool consecutiveSetBits(int n) {
        string num="";
        while(n)
        {
            if(n&1) num+='1';
            else num+='0';
            n>>=1;
        }
        if(num.length()<=1) return false;
        int count=0;
        for(int i=0;i<num.length()-1;i++)
        {
            if(num[i]=='1'&&num[i+1]=='1') count++;
            if(count==2) return false;
        }
        if(count) return true;
        return false;
    }
};