class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++)
        {
            int k1=0;
            int j=i;
            if(j+k<nums.size())
            {
                for(j=i;j<(i+k)-1;j++)
                {
                    if(nums[j]>=nums[j+1])
                    {
                        k1=1;
                        break;
                    }
                }
            }
            else k1=1;
            int t=0;
            if(!k1)
            {
                // cout<<"En";
                int r=j;
                cout<<r;
                if(r+k<nums.size())
                {
                    for(r=j+1;r<(j+k);r++)
                    {
                        if(nums[r]>=nums[r+1])
                        {
                            t=1;
                            break;
                        }
                    }
                }
                else t=1;
                if((!t)&&(!k)==0) return true;
            }
        }
        return false;
    }
};