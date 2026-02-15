class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<string>st;
        unordered_map<char,vector<int>>mpp;
        for(int i=0;i<s.length();i++)
        {
            mpp[s[i]].push_back(i);
        }
        for(auto it:mpp)
        {
            if(it.second.size()>1)
            {
                int i=it.second[0];
                int j=it.second[it.second.size()-1];
                if(j-i>1)
                {
                    i++;
                    while(i<j)
                    {
                        string temp="";
                        temp+=it.first;
                        temp+=s[i];
                        temp+=it.first;
                        st.insert(temp);
                        i++;
                    }
                }
            }
        }
        return st.size();
    }
};