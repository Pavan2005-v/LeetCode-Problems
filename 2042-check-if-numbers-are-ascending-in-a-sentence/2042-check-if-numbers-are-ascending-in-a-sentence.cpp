class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int>temp;
        int i=0;
        while(i<s.length())
        {
            if(isdigit(s[i]))
            {
                if(i+1<s.length()&&isdigit(s[i+1]))
                {
                    int a=(s[i]-'0')*10+s[i+1]-'0';
                    temp.push_back(a);
                    i+=2;
                }
                else
                {
                    int a=s[i]-'0';
                    temp.push_back(a);
                    i++;
                }
            }
            else i++;
        }
        for(int i:temp) cout<<i<<" ";
        for(int i=1;i<temp.size();i++)
        {
            if(temp[i]<=temp[i-1]) return false;
        }
        return true;
    }
};