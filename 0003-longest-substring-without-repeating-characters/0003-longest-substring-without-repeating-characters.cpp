class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            unordered_set<char>s1;
            for(int j=i;j<s.length();j++)
            {
                if(!s1.contains(s[j]))
                {
                    s1.insert(s[j]);
                }
                else break;
            }
            int size=s1.size();
            ans=max(ans,size);
        }
        return ans;
    }
};