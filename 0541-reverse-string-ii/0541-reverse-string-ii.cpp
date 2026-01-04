class Solution {
public:
    string reverseStr(string s, int k) {
        int i=0;
        int j=k;
        string temp="";
        int c=0;
        while(c<s.length())
        {
            string a="";
            int ct=0;
            while(c<s.length()&&ct<k)
            {
                a+=s[c];
                ct++;
                c++;
            }
            ct=0;
            reverse(a.begin(),a.end());
            while(c<s.length()&&ct<k)
            {
                a+=s[c];
                ct++;
                c++;
            }
            temp+=a;    
        }
        return temp;
    }
};