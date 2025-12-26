class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int>s;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>k) s.insert(nums[i]);
            if(nums[i]==k) c++;
        }
        if(c==nums.size()) return 0;
        else if(s.size()==0) return -1;
        else return s.size();
    }
};