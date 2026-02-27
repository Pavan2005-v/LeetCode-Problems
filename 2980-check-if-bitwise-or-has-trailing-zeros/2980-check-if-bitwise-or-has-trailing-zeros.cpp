class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int n=nums.size(),c=0;
        for(int i:nums)
        {
            if(!(i&1)) 
            {
                c++;
                if(c>1) return true;
            }
        }
        return c>1;
    }
};