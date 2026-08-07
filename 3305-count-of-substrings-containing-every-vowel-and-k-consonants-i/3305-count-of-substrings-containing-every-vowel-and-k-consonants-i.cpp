class Solution {
public:
    int countOfSubstrings(string s, int k) {
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            unordered_set<char>st;
            int count=0;
            for(int j=i;j<s.length();j++)
            {
                if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
                {
                    st.insert(s[j]);
                }
                else 
                {
                    count++;
                }
                if(st.size()==5&&count==k)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};