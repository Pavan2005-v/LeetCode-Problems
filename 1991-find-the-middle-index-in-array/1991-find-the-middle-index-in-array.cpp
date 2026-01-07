class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        if(nums.size()==1) return 0;
        for(int i=0;i<nums.size();i++)
        {
            int lsum=0;
            int rsum=0;
            int en=0;
            for(int j=i-1;j>=0;j--)
            {
                lsum+=nums[j];
                en=1;
            }
            for(int k=i+1;k<nums.size();k++)
            {
                rsum+=nums[k];
                en=1;
            }
            if((rsum==lsum)&&(en==1))
            {
                return i;
            }
        }
        return -1;
    }
};