class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,vector<int>>mpp;
        for(int i=0;i<s.length();i++)
        {
            if(!mpp.contains(s[i]))
            {
                mpp[s[i]]={i,i};
            }
            else
            {
                vector<int>temp=mpp[s[i]];
                temp[1]=i;
                mpp[s[i]]=temp;
            }
        }
        vector<vector<int>>temp;
        for(auto it:mpp)
        {
            temp.push_back({it.second[0],it.second[1]});
        }
        sort(temp.begin(),temp.end());
        int num=temp[0][1];
        int ind=0;
        vector<int>ans;
        for(int i=1;i<temp.size();i++)
        {
            if(temp[i][0]>num)
            {
                ans.push_back(num-temp[ind][0]+1);
                num=temp[i][1];
                ind=i;
            }
            num=max(temp[i][1],num);
        }
        int n=temp.size()-1;
        if(ind!=n)
        {
            ans.push_back(num-temp[ind][0]+1);
        }
        else
        {
            ans.push_back(num-temp[n][0]+1);
        }
        return ans;
        
    }
};