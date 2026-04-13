class Solution {
public:
    bool checkStrings(string s1, string s2) {
        unordered_map<char,vector<int>>mpp;
        for(int i=0;i<s1.length();i++)
        {
            mpp[s1[i]].push_back(i);
        }
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]!=s2[i])
            {
                if(mpp.contains(s2[i]))
                {
                    vector<int>temp=mpp[s2[i]];
                    int k=1;
                    for(int j=0;j<temp.size();j++)
                    {
                        if(temp[j]>i&&(temp[j]-i)%2==0)
                        {
                            swap(s1[i],s1[temp[j]]);
                            k=0;
                            break;
                        }
                    }
                    if(k) return false;
                }
                else return false;
            }
        }
        return s1==s2;
    }
};