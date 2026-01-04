class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mpp;
        for(int i:nums)mpp[i]++;
        int c=0;
        for(auto it:mpp)
        {
            int range=it.second;
            if(range>2) range=2;
            else if(range<=2) range=it.second;
            for(int i=0;i<range;i++)
            {
                nums[c]=it.first;
                c++;
            }
        }
        return c;
    }
};