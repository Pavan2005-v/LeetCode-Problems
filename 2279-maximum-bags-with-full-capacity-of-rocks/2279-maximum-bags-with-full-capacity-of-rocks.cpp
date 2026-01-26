class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int Rocks) {
        vector<pair<int,vector<int>>> nums;
        for(int i=0;i<capacity.size();i++)
        {
            nums.push_back({capacity[i]-rocks[i],{capacity[i],rocks[i]}});
        }
        sort(nums.begin(),nums.end());
        for(auto &it:nums)
        {
            if(it.first!=0&&Rocks>0)
            {
                if(Rocks-it.first>=0)
                {
                    it.second[1]+=it.first;
                    Rocks-=it.first;
                    it.first=0;
                }
            }
        }
        int ans=0;
        for(auto it:nums)
        {
            if(it.first==0) ans++;
        }
        return ans;
    }
};