class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //-4 -1 -1 0 1 2 
        sort(nums.begin(),nums.end());
        int i=0;
        int j=1;
        int k=nums.size()-1;
        int it=i;
        int it1=j;
        set<vector<int>>s;
        while(j<nums.size()-1)
        {
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(nums[i]+nums[j]+nums[k]<0)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
            it++;
            it1++;
            i=it;
            j=it1;
            k=nums.size()-1;
        }
        vector<vector<int>>ans(s.begin(),s.end());
        return ans;
    }
};