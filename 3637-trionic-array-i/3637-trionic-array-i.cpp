class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int k=0;
        int l=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                k=i;
                break;
            }
            else if(nums[i]==nums[i+1]) return false;
        }
        if(k==0) return false;
        for(int i=k;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1])
            {
                l=i;
                break;
            }
            else if(nums[i]==nums[i+1]) return false;
        }
        if(l==0) return false;
        for(int i=0;i<k;i++)
        {
            if(nums[i]>nums[i+1]) return false;
        }
        for(int j=k;j<l;j++)
        {
            if(nums[j]<nums[j+1]) return false;
        }
        for(int i=l;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1]) return false;
            else if(nums[i]==nums[i+1]) return false;
        }
        return true;
    }

};