class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int maxi=*max_element(nums.begin(),nums.end());
        auto it=find(nums.begin(),nums.end(),maxi);
        int index=it-nums.begin();
        for(int i=0;i<index;i++)
        {
            count+=(maxi-nums[i]);
        }
        return count;
    }
};