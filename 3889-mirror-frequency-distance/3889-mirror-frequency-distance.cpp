class Solution {
public:
    int mirrorFrequency(string s) {
        int ans=0;
        unordered_map<char,int>mpp1;
        unordered_map<int,int>mpp2;
        unordered_map<char,char>mpp3;
        unordered_map<int,int>mpp4;
        for(int i=0;i<s.length();i++)
        {
            if(isalpha(s[i])) mpp1[s[i]]++;
            else mpp2[s[i]-'0']++;
        }
        for(int i=0;i<13;i++)
        {
            char a='a'+i;
            mpp3[a]=a+(25-((a-'a')*2));
        }
        mpp4[0]=9;
        for(int i=0;i<4;i++)
        {
            int num=i+1;
            mpp4[num]=num+(9-(2*num));
        }
        for(auto it:mpp3)
        {
            ans+=(abs(mpp1[it.first]-mpp1[it.second]));
        }
        for(auto it:mpp4)
        {
            ans+=(abs(mpp2[it.first]-mpp2[it.second]));
        }
        return ans;
    }
};