class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_set<int>st;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(st.contains(nums[i]))
            {
                count+=(nums[i-1]+1)-nums[i];
                nums[i]=nums[i-1]+1;
                st.insert(nums[i]);
            }
            else st.insert(nums[i]);
        }
        return count;
    }
};