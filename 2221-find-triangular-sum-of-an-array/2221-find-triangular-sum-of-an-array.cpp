class Solution {
public:
    vector<int> process(vector<int>n)
    {
        vector<int>temp;
        for(int i=1;i<n.size();i++)
        {
            temp.push_back((n[i-1]+n[i])%10);
        }
        return temp;
    }
    int triangularSum(vector<int>& nums) {
        while(nums.size()!=1)
        {
            nums=process(nums);
        }
        return nums[0];
    }
};