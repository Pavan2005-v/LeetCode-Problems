class Solution {
public:
    int compress(vector<char>& chars) {
        string s="";
        int i=0;
        int j=0;
        for(i=j;i<chars.size();)
        {
            int c=1;
            for(j=i+1;j<chars.size();j++)
            {
                if(chars[i]==chars[j])
                {
                    c++;
                }
                else break;
            }
            s+=chars[i];
            if(c>=2&&c<=9)
            {
                s+=(c+'0');
            }
            else if(c>9)
            {
                s+=(to_string(c));
            }
            i=j;
        }
        chars.clear();
        for(int i=0;i<s.length();i++)
        {
            chars.push_back(s[i]);
        }
        return s.length();
    }
};