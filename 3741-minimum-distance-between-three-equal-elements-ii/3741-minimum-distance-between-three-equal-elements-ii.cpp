class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int ans=INT_MAX;
        unordered_map<int,vector<int>>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]].push_back(i);
        }
        for(auto &it:mpp)
        {
            if(it.second.size()>=3)
            {
                sort(it.second.begin(),it.second.end());
                int temp=INT_MAX;
                for(int i=0;i<it.second.size()-2;i++)
                {
                    int sum=abs(it.second[i]-it.second[i+1])+abs(it.second[i+1]-it.second[i+2])+abs(it.second[i+2]-it.second[i]);
                    temp=min(temp,sum);
                }
                ans=min(temp,ans);
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};