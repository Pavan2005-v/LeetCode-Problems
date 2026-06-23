class Solution {
public:
    int compareVersion(string v1, string v2) {
        long long num1=0,num2=0;
        int l=0,r=0;
        while(l<v1.length()&&r<v2.length())
        {
            while(l<v1.length()&&v1[l]!='.')
            {
                num1=num1*10+(v1[l]-'0');
                l++;
            }
            while(r<v2.length()&&v2[r]!='.')
            {
                num2=num2*10+(v2[r]-'0');
                r++;
            }
            if(num1>num2) return 1;
            else if(num1<num2) return -1;
            num1=0; num2=0;
            l++; r++;
        }
        while(l<v1.length())
        {
            if(v1[l]=='.')
            {
                if(num1>0) return 1;
                num1=0;
                l++;
            }
            num1=num1*10+(v1[l]-'0');
            l++;
        }
        if(num1>0) return 1;
        while(r<v2.length())
        {
            if(v2[r]=='.')
            {
                if(num2>0) return -1;
                num2=0;
                r++;
            }
            num2=num2*10+(v2[r]-'0');
            r++;
        }
        if(num2>0) return -1;
        return 0;
    }
};