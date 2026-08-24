class Solution {
public:
    bool isPalindromic(string s) {
        string bin="";
        for(char c:s)
        {
            int n=c;
            string temp="";
            while(n>0)
            {
                temp+=(to_string(n%2));
                n>>=1;
            }
            while(temp.size()<8)
            {
                temp+='0';
            }
            reverse(temp.begin(),temp.end());
            bin+=temp;
        }
        int l=0,r=bin.size()-1;
        while(l<r)
        {
            if(bin[l]!=bin[r]) return false;
            l++; r--;
        }
        return true;
    }
};