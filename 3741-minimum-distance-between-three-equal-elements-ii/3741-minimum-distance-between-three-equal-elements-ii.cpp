class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int ans=INT_MAX;
        unordered_map<int,vector<int>>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]].push_back(i);
        }
        for(auto it:mpp)
        {
            vector<int>temp=it.second;
            int i=0;
            while(i+2<temp.size())
            {
                ans=min(ans,abs(temp[i]-temp[i+1])+abs(temp[i+1]-temp[i+2])+abs(temp[i+2]-temp[i]));
                i++;
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};