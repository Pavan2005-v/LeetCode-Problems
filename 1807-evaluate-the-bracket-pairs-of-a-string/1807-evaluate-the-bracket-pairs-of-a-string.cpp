class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string ans="";
        unordered_map<string,string>mpp;
        for(int i=0;i<knowledge.size();i++)
        {
            mpp[knowledge[i][0]]=knowledge[i][1];
        }
        for(int i=0;i<s.length();)
        {
            if(s[i]=='(')
            {
                string temp="";
                int j=i+1;
                while(s[j]!=')')
                {
                    temp+=s[j];
                    j++;
                }
                if(mpp.contains(temp)) ans+=mpp[temp];
                else ans+='?';
                i=j+1;
            }
            else
            {
                ans+=s[i];
                i++;
            }
        }
        return ans;
    }
};