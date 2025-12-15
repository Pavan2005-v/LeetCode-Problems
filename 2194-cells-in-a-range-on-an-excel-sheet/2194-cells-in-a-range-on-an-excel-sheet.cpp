class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string>ans;
        string temp="";
        for(int i=s[0];i<=s[3];i++)
        {
            int r1=s[1]-'0';
            int r2=s[4]-'0';
            for(int j=r1;j<=r2;j++)
            {
                temp+=(char(i));
                temp+=to_string(j);
                ans.push_back(temp);
                temp="";
            }
        }
        return ans;
    }
};