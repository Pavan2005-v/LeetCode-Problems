class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind=-1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                ind=i;
                break;
            }
        }
        if(ind==-1)
        {
            reverse(nums.begin(),nums.end());
        }
        int ele=INT_MAX;
        int ind1;
        if(ind!=-1){
        for(int i=ind+1;i<nums.size();i++)
        {
            if(nums[i]>nums[ind]&&ind!=-1)
            {
                if(nums[i]<ele)
                {
                    ele=nums[i];
                    ind1=i;
                }
            }
        }}
        if(ind!=-1)swap(nums[ind],nums[ind1]);
        if(ind!=-1)sort(nums.begin()+ind+1,nums.end());


    }
};