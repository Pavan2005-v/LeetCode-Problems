class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        int it=nums.size();
        int size=nums.size()-k;
        vector<int>temp1=nums;
        for(int i=0;i<nums.size();i++)
        {
            temp1.push_back(nums[i]);
        }
        nums.clear();
        for(int i=size;i<size+it;i++)
        {
            nums.push_back(temp1[i]);
        }
    }
};