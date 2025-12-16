class Solution {
public:
    string stringHash(string s, int k) {
        unordered_map<char,int>mpp;
        int index=0;
        for(int i=97;i<=122;i++)
        {
            mpp[(char)i]=index;
            index++;
        }
        string ans="";
        for(int i=0;i<s.length();i+=k)
        {
            string temp=s.substr(i,k);
            int sum=0;
            for(char c:temp)
            {
                sum+=(mpp[c]);
            }
            sum%=26;
            sum+=97;
            ans+=((char)sum);
        }
        return ans;
    }
};