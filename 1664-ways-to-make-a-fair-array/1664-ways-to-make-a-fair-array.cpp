class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int n=nums.size(),ans=0;
        if(n==1)
        {
            return 1;
        }
        int OddSum=0,EvenSum=0,count1=0,count2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i&1) OddSum+=nums[i];
            else EvenSum+=nums[i];
        }
        if(EvenSum-nums[0]==OddSum) ans++;
        for(int i=1;i<n;i++)
        {
            if((i-1)&1) count1+=nums[i-1];
            else count2+=nums[i-1];
            if(i&1)
            {
                if(count1+(EvenSum-count2)==count2+(OddSum-count1-nums[i])) ans++;
            }
            else
            {
                if(count2+(OddSum-count1)==count1+(EvenSum-count2-nums[i])) ans++;
            }
        }
        return ans;
    }
};