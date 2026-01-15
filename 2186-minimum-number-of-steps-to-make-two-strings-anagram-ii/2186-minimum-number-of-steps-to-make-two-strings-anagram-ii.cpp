class Solution {
public:
    int minSteps(string s, string t) {    
        int ans=0;
        unordered_map<char,int>mpp1;
        unordered_map<char,int>mpp2;
        for(char c:s) mpp1[c]++;
        for(char c:t) mpp2[c]++;
        for(auto it:mpp1)
        {
            if(mpp2.contains(it.first))
            {
                ans+=(abs(it.second-mpp2[it.first]));
            }
            else
            {
                ans+=it.second;
            }
        }
        for(auto it:mpp2)
        {
            if(!mpp1.contains(it.first))
            {
                ans+=it.second;
            }
        }
        return ans;
    }
};