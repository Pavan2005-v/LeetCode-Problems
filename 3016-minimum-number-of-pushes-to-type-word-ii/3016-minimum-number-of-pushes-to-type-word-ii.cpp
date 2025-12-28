class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>mpp;
        for(char c:word) mpp[c]++;
        if(mpp.size()<=8)
        {
            return word.length();
        }
        else
        {
            vector<pair<int,char>>p;
            for(auto it:mpp) p.push_back({it.second,it.first});
            sort(p.rbegin(),p.rend());
            unordered_map<int,vector<int>>mp;
            int count=1;
            for(int i=0;i<p.size();i++)
            {
                if(count<=8)
                {
                    mp[count].push_back(p[i].first);
                    count++;
                }
                else if(count>8)
                {
                    count=1;
                    mp[count].push_back(p[i].first);
                    count++;
                }
            }
            int ans=0;
            for(auto it:mp)
            {
                vector<int>temp=it.second;
                for(int i=0;i<temp.size();i++)
                {
                    ans+=(temp[i]*(i+1));
                }
            }
            return ans;
        }
        
    }
};