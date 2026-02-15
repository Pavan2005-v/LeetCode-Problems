class Solution {
public:
    int minimumLength(string s) {
        
        unordered_map<char,int>mpp;
        for(char c:s) mpp[c]++;
        int ans=0;
        for(auto it:mpp)
        {
            if(it.second>=3)
            {
                if(it.second%2) ans++;
                else ans+=2;
            }
            else ans+=it.second;
        } 
        return ans;
    }
};