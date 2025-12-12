class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count=0;
        for(string i:words)
        {
            if(s.substr(0,i.length())==i)
            {
                count++;
            }
        }
        return count;
    }
};