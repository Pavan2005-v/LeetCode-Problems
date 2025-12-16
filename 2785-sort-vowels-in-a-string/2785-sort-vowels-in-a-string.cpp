class Solution {
public:
    bool isVowel(char c)
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        {
            return true;
        }
        else return false;
    }
    string sortVowels(string s) {
        vector<char> temp;
        for(char c:s)
        {
            if(isVowel(c))
            {
                temp.push_back(c);
            }
        }
        sort(temp.begin(),temp.end());
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            if(isVowel(s[i]))
            {
                s[i]=temp[c];
                c++;
            }
        }
        return s;
    }
};