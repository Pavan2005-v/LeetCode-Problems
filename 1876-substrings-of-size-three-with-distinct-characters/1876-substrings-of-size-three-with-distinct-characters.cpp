class Solution {
public:
    int countGoodSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            string temp="";
            for(int j=i;j<i+3;j++)
            {
                if(j<s.length()) temp+=s[j];
            }
            if(temp[0]!=temp[1]&&temp.size()==3&&temp[1]!=temp[2])
            {
                if(temp[2]!=temp[0]&&temp[1]!=temp[0])
                {
                    count++;
                }
            }
        }
        return count;
    }
};