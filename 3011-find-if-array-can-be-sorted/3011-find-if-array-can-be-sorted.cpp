class Solution {
public:
    void sort1(vector<int>&nums,int ind)
    {
        for(int i=ind;i>0;i--)
        {
            int num1=nums[i];
            int num2=nums[i-1];
            int c1=0;
            int c2=0;
            // cout<<num1<<" "<<num2<<endl;
            while(num1>0)
            {
                if(num1%2!=0) c1++;
                num1/=2;
            }
            while(num2>0)
            {
                if(num2%2!=0) c2++;
                num2/=2;
            }
            // cout<<c1<<" "<<c2<<endl;
            if(c1==c2) 
            {
                if(nums[i-1]>nums[i])
                {
                    swap(nums[i-1],nums[i]);
                    cout<<nums[ind-1]<<" "<<nums[ind]<<endl;
                }
            }
        }
    }
    bool canSortArray(vector<int>& nums) {
        
        for(int i=0;i<nums.size()-1;i++)
        {
            sort1(nums,i+1);
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1]) return false;
        }
        return true;
    }
};