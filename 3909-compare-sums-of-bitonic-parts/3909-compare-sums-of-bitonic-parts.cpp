class Solution {
public:
    using ll=long long;
    int compareBitonicSums(vector<int>& nums) {
        ll sum=0,ind;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(nums[i]>nums[i+1])
            {
                ind=i;
                break;
            }
        }
        for(int i=ind;i<nums.size();i++)
        {
            sum-=nums[i];
        }
        if(sum>0) return 0;
        else if(sum<0) return 1;
        return -1;
    }
};