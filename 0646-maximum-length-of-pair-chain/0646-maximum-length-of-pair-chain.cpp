class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),[](const vector<int>&x,const vector<int>&y)
        {
            return x[1]<y[1];
        });
        int ans=0;
        for(int i=0;i<pairs.size();i++)
        {
            int count=0;
            int temp=pairs[i][1];
            for(int j=i+1;j<pairs.size();j++)
            {
                if(temp<pairs[j][0])
                {
                    count++;
                    temp=pairs[j][1];
                }
            }
            ans=max(ans,count+1);
        }
        return ans;
    }
};