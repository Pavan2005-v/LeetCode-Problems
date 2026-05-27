class Solution {
public:
    int numberOfSpecialChars(string s) {
        int ans=0;
        unordered_map<char,int>mpp2;
        unordered_set<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(islower(s[i]))
            {
                mpp2[s[i]]=i;
            }
        }
        unordered_set<char>st1;
        for(int i=0;i<s.length();i++)
        {
            if(isupper(s[i]))
            {
                if(mpp2.contains(tolower(s[i])))
                {
                    char ch=tolower(s[i]);
                    if(mpp2[tolower(s[i])]<i)
                    {
                        st.insert(ch);
                    }
                    else if(mpp2[tolower(s[i])]>i)
                    {
                        st1.insert(ch);
                    }
                }
            }
        }
        ans=st.size();
        for(auto it:st1)
        {
            if(st.contains(it))
            {
                ans--;
            }
        }
        if(ans>0) return ans;
        else return 0;
    }
};