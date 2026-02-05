class Solution {
public:
    long long findScore(vector<int>& nums) {
        vector<pair<int,int>>vect;
        vector<int>temp(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            vect.push_back({nums[i],i});
        }
        sort(vect.begin(),vect.end());
        long long int ans=0;
        for(int i=0;i<vect.size();i++)
        {
            if(temp[vect[i].second]==0)
            {
                if(vect[i].second+1<nums.size()) temp[vect[i].second+1]=1;
                if(vect[i].second-1>=0) temp[vect[i].second-1]=1;
                temp[vect[i].second]=1;
                ans+=vect[i].first;
            }
        }
        return ans;
    }
};