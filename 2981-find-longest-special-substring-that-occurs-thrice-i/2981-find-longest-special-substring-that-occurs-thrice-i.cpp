class Solution {
public:
    int maximumLength(string s) {
        int maxi=-1;
        unordered_map<string,int>mpp1;
        for(int i=0;i<s.length();i++)
        {
            unordered_map<char,int>mpp;
            string temp="";
            for(int j=i;j<s.length();j++)
            {
                mpp[s[j]]++;
                if(mpp.size()==1)
                {
                    temp+=s[j];
                    mpp1[temp]++;
                }
            }
        }
        for(auto it:mpp1)
        {
            if(it.second>=3)
            {
                int size=it.first.length();
                maxi=max(maxi,size);
            }
        }
        return maxi;
    }
};