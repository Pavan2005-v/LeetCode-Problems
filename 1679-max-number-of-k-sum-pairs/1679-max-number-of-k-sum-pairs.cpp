class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(mpp.contains(k-nums[i]))
            {
                if(mpp[k-nums[i]]>0)
                {
                    ans++;
                    mpp[k-nums[i]]--;
                }
                else mpp[nums[i]]++;
            }
            else mpp[nums[i]]++;
        }
        return ans;
    }
};