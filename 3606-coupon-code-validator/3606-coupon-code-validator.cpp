class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<pair<string,int>>ans;
        unordered_map<string,int>mpp;
        mpp["electronics"]=1;
        mpp["grocery"]=2;
        mpp["pharmacy"]=3;
        mpp["restaurant"]=4;
        for(int i=0;i<code.size();i++)
        {
            string temp=code[i];
            int k=1;
            if(temp.size()==0) continue;
            for(int j=0;j<temp.length();j++)
            {
                if(temp[j]>='a'&&temp[j]<='z') k=1;
                else if(temp[j]>='A'&&temp[j]<='Z') k=1;
                else if(temp[j]=='_') k=1;
                else if(isdigit(temp[j]))
                {
                    if(temp[j]-'0'>=0&&temp[j]-'0'<=9) k=1;
                    else
                    {
                        k=0;
                        break;
                    }
                }
                else
                {
                    k=0;
                    break;
                }
            }
            if(k)
            {
                if(businessLine[i]=="electronics"||businessLine[i]=="grocery"||businessLine[i]=="pharmacy"||businessLine[i]=="restaurant")
                {
                    if(isActive[i]) ans.push_back({code[i],i});
                }
            }
        }
        sort(ans.begin(),ans.end(),[&](pair<string,int>& a,pair<string,int> &b){
            if(mpp[businessLine[a.second]]==mpp[businessLine[b.second]])
            {
                return a.first<b.first;
            }
            return mpp[businessLine[a.second]]<mpp[businessLine[b.second]];
        });
        vector<string>ans1;
        for(int i=0;i<ans.size();i++) ans1.push_back(ans[i].first);
        return ans1;
    }
};