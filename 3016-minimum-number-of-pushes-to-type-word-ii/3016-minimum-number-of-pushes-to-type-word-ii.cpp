class Solution {
public:
    int minimumPushes(string word) {
        vector<int>temp(26);
        for(char c:word)
        {
            temp[c-'a']++;
        }
        vector<pair<char,int>>pr;
        for(int i=0;i<26;i++)
        {
            if(temp[i]!=0)
            {
                pr.push_back({i+'a',temp[i]});
            }
        }
        sort(pr.begin(),pr.end(),[&](pair<char,int>&a,pair<char,int>&b){
            return a.second>b.second;
        });
        vector<int>temp1(26);
        int count=0;
        int assign=1;
        for(int i=0;i<pr.size();i++)
        {
            if(temp1[pr[i].first-'a']==0)
            {
                temp1[pr[i].first-'a']=assign;
                count++;
            }
            if(count==8)
            {
                assign++;
                count=0;
            }
        }
        int ans=0;
        for(char c:word)
        {
            ans+=temp1[c-'a'];
        }
        return ans;
    }
};