class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if((i+k<nums.size())&&(i-k>=0))
            {
                if((nums[i+k]<nums[i])&&(nums[i-k]<nums[i])) sum+=nums[i];
                cout<<"Loop1-"<<sum<<endl;
            }
            else if((i+k<nums.size())&&(i-k<=0))
            {
                if(nums[i+k]<nums[i]) sum+=nums[i];
                cout<<"Loop2-"<<sum<<endl;
            }
            else if((i+k>=nums.size())&&(i-k>=0))
            {
                if(nums[i-k]<nums[i]) sum+=nums[i];
                cout<<"Loop3-"<<sum<<endl;
            }
        }
        return sum;
    }
};