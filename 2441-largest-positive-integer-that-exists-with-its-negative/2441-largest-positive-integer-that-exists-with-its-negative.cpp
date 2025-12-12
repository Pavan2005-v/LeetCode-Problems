class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        vector<int>temp;
        for(int i:nums)
        {
            if(i<0) temp.push_back(i);
        }
        sort(temp.begin(),temp.end());
        for(int i:temp)
        {
            if(find(nums.begin(),nums.end(),-i)!=nums.end())
            {
                return -i;
            }
        }
        return -1;
    }
};