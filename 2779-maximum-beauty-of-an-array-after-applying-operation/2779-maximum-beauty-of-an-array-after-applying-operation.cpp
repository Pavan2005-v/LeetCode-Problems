class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        vector<pair<int,int>>temp;
        for(int i=0;i<nums.size();i++)
        {
            temp.push_back({nums[i]-k,nums[i]+k});
        }
        sort(temp.begin(),temp.end());
        int ans=0,l=0,r=0;
        for(auto it:temp) cout<<it.first<<" "<<it.second<<endl;
        while(l<temp.size()&&r<temp.size())
        {
            if(temp[l].first<=temp[r].second)
            {
                ans=max(ans,l-r+1);
                l++;
            }
            else
            {
                r++;
            }
        }
        return ans;
    }
};