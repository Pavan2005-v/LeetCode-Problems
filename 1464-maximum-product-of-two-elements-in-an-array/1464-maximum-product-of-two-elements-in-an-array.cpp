class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans1=INT_MIN,ans2=INT_MIN,ind;
        for(int i=0;i<nums.size();i++)
        {
            if(ans1<nums[i])
            {
                ind=i;
                ans1=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i!=ind)
            {
                ans2=max(ans2,nums[i]);
            }
        }
        return (ans1-1)*(ans2-1);
        
    }
};