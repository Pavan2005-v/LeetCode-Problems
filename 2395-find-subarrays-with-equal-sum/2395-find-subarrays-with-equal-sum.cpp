class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        vector<int>sum;
        for(int i=0;i<nums.size();i++)
        {
            int s=0;
            for(int j=i;j<nums.size();j++)
            {
                if(j-i==1)
                {
                    s+=(nums[j]+nums[i]);
                    if(find(sum.begin(),sum.end(),s)!=sum.end()) return true;
                    else sum.push_back(s);
                }
            }
        }
        return false;
    }
};