class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        sort(dictionary.begin(),dictionary.end(),[&](string &a,string &b){
            if(a.length()==b.length()) return a<b;
            return a.length()>b.length();
        });
        for(int i=0;i<dictionary.size();i++)
        {
            string temp=dictionary[i];
            int l=0,r=0;
            while(l<temp.length()&&r<s.length())
            {
                if(temp[l]!=s[r])
                {
                    r++;
                }
                else
                {
                    l++;
                    r++;
                }
            }
            if(l==temp.length())
            {
                return temp;
            }
        }
       return "";
    }
};