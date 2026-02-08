class Solution {
public:
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) {
        priority_queue<int>maxheap;
        unordered_map<int,int>mpp;
        for(int i=0;i<x.size();i++)
        {
            if(mpp.contains(x[i]))
            {
                mpp[x[i]]=max(y[i],mpp[x[i]]);
            }
            else mpp[x[i]]=y[i];
        }
        if(mpp.size()<3) return -1;
        for(auto it:mpp)
        {
            maxheap.push(it.second);
        }
        int i=3;
        int ans=0;
        while(i--)
        {
            ans+=maxheap.top();
            maxheap.pop();
        }
        return ans;
    }
};