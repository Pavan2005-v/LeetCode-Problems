class Solution {
public:
    string sortSentence(string s) {
        map<int,string> mpp;
        string temp="";
        for(int i=0;i<s.length();i++)
        {
            if(!isdigit(s[i])&&!isspace(s[i]))
            {
                temp+=s[i];
            }
            else if(isdigit(s[i]))
            {
                mpp[s[i]-'0']=temp;
                temp="";
            }
        }
        string ans="";
        for(auto it:mpp)
        {
            ans+=(it.second);
            ans+=' ';
        }
        ans=ans.substr(0,ans.size()-1);
        return ans;
    }
};