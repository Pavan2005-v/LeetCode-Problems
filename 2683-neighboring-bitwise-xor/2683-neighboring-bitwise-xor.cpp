class Solution {
public:
    bool doesValidArrayExist(vector<int>& nums) {
        int x=0;
        for(int i=1;i<nums.size();i+=2)
        {
            x^=nums[i];
        }
        x^=1;
        vector<int>temp;
        temp.push_back(x);
        for(int i=0;i<nums.size()-1;i++)
        {
            temp.push_back(temp[i]^nums[i]);
        }
        return (temp[0]^temp[temp.size()-1])==(nums[nums.size()-1]);
    }
};