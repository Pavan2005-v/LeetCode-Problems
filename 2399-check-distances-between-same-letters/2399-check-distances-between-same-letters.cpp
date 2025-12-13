class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        for(int i=0;i<s.size();i++)
        {
            for(int j=i+1;j<s.size();j++)
            {
                if(s[i]==s[j])
                {
                    int count=j-i-1;
                    int index=s[i]-96;
                    if(distance[index-1]!=count) return false;
                }
            }
        }
        return true;
    }
};