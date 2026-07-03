class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.length()<10) return {};
        int l=0,r=9;
        unordered_map<string,int>mpp;
        vector<string>ans;
        string temp="";
        for(int i=0;i<10;i++)
        {
            temp+=s[i];
        }
        mpp[temp]++;
        while(r<s.length()-1)
        {
            temp.erase(0,1);
            l++;
            r++;
            temp+=s[r];
            mpp[temp]++;
        }
        for(auto it:mpp)
        {
            if(it.second>1) ans.push_back(it.first);
        }
        return ans;
    }
};