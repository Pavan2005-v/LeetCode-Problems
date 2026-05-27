class Solution {
public:
    string majorityFrequencyGroup(string s) {
        unordered_map<char,int>mpp;
        for(char c:s) mpp[c]++;
        unordered_map<int,string>mpp1;
        for(auto it:mpp)
        {
            mpp1[it.second]+=it.first;
        }
        int size=INT_MIN;
        int freq=INT_MIN;
        string ans;
        for(auto it:mpp1)
        {
            int len=it.second.length();
            size=max(size,len);
        }
        for(auto it:mpp1)
        {
            if(it.second.length()==size)
            {
                if(freq<it.first)
                {
                    ans=it.second;
                    freq=it.first;
                }
            }
        }
        return ans;
    }
};