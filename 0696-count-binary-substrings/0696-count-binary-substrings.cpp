class Solution {
public:
    int countBinarySubstrings(string s) {
        int i=0;
        int j=i+1;
        vector<int>sub;
        while(i<s.length())
        {
            if(s[i]==s[j])
            {
                while(j<s.length()&&s[i]==s[j])
                {
                    j++;
                }
                sub.push_back(j-i);
                i=j;
                j=i+1;
            }
            else 
            {
                sub.push_back(1);
                i=j;
                j=i+1;
            }
        }
        int ans=0;
        for(int i=0;i<sub.size()-1;i++)
        {
            ans+=(min(sub[i],sub[i+1]));
        }
        return ans;
    }
};