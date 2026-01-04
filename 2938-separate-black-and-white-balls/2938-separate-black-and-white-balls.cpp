class Solution {
public:
    long long minimumSteps(string s) {
        long long int count=0;
        long long int c=0;
        for(int i=s.length();i>=0;i--)
        {
            if(s[i]=='0') c++;
            else if(s[i]=='1')
            {
                count+=c;
            }
        }
        return count;
    }
};