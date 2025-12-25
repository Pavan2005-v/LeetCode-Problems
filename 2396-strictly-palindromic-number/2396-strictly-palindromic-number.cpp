class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<=n-2;i++)
        {
            int b=i;
            int num=n;
            string temp="";
            while(num>0)
            {
                temp+=(to_string(num%b));
                num/=b;
            }
            string temp1=temp;
            reverse(temp1.begin(),temp1.end());
            if(temp1!=temp) return false;
        }
        return true;
    }
};