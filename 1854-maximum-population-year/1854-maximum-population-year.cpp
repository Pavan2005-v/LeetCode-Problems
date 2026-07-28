class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int n=logs.size();
        map<int,int>mpp;
        set<int>st;
        for(int i=0;i<n;i++)
        {
            mpp[logs[i][0]]+=1;
            mpp[logs[i][1]]-=1;
            st.insert(logs[i][0]);
            st.insert(logs[i][1]);
        }
        vector<int>temp;
        for(auto it:mpp) temp.push_back(it.second);
        int maxi=INT_MIN,ind;
        for(int i=1;i<temp.size();i++)
        {
            temp[i]+=temp[i-1];
        }
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i]>maxi)
            {
                maxi=temp[i];
                ind=i;
            }
        }
        vector<int>yr;
        for(int i:st) yr.push_back(i);
        return yr[ind];
    }
};