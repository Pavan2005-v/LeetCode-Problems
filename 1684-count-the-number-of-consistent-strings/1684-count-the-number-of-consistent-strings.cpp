class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char>st(allowed.begin(),allowed.end());
        int ans=0;
        for(string s:words)
        {
            int k=1;
            for(char c:s)
            {
                if(!st.contains(c)) k=0;
            }
            if(k) ans++;
        }
        return ans;

    }
};