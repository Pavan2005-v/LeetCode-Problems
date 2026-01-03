class Solution {
public:
    string reverseVowels(string s) {
        vector<char>temp;
        for(char c:s)
        {
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            {
                temp.push_back(c);
            }
        }
        reverse(temp.begin(),temp.end());
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                s[i]=temp[c];
                c++;
            }
        }
        return s;
    }
};