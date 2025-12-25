class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        vector<string> ans;
        unordered_map<string,int>mpp;
        for(int i=0;i<cpdomains.size();i++)
        {
            int j=0;
            while(!isspace(cpdomains[i][j]))
            {
                j++;
            }
            int n=stoi(cpdomains[i].substr(0,j));
            string s=cpdomains[i].substr(j+1,cpdomains[i].length());
            if(mpp.contains(s))
            {
                mpp[s]+=n;
            }
            else mpp[s]=n;
            while(j<cpdomains[i].length())
            {
                if(cpdomains[i][j]=='.')
                {
                    string tem=cpdomains[i].substr(j+1,cpdomains[i].length());
                    if(mpp.contains(tem))
                    {
                        mpp[tem]+=n;
                    }
                    else
                    {
                        mpp[tem]=n;
                    }
                }
                j++;
            }    
        }
        for(auto it:mpp)
        {
            string t="";
            t+=(to_string(it.second));
            t+=' ';
            t+=it.first;
            ans.push_back(t);
        }
        return ans;
        
    }
};