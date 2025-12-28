class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mpp;
        for(int i:arr) mpp[i]++;
        vector<pair<int,int>>p;
        for(auto it:mpp) p.push_back({it.second,it.first});
        sort(p.rbegin(),p.rend());
        int c=arr.size()/2;
        int count=0;
        int size=0;
        for(int i=0;i<p.size();i++)
        {
            if(count>=c) return size;
            else
            {
                count+=p[i].first;
                size++;
            }
        }
        return size;
    }
};