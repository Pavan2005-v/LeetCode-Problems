class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=nums[nums.size()-1];
        for(int i=1;i<=l;i++)
        {
            int count=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]>=i) count++;
            }
            if(count==i) return i;
        }
        return -1;
    }
};