class Solution {
public:
    string clearStars(string s) {
        int n=s.length();
        priority_queue<pair<char,int>,vector<pair<char,int>>,greater<pair<char,int>>>pq;
        vector<int>temp;
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(s[i]=='*')
            {
                if(pq.size()!=0)
                {
                    pq.pop();
                }
            }
            else
            {
               pq.push({s[i],-i});
            }
        }
        while(!pq.empty())
        {
            temp.push_back(-pq.top().second);
            pq.pop();
        }
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++)
        {
            ans+=s[temp[i]];
        }
        return ans;
    }
};