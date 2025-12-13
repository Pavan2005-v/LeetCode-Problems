class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int k=1;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j]) k=0;
            }
        }
        if(k) return 0;
        int n=nums.size();
        if(n==3)
        {
            if(nums[0]!=nums[1]&&nums[1]!=nums[2]&&nums[0]&&nums[2]) return 0;
            else return 1;
        }
        if(n%3==0) return (n/3)-1;
        else return (n/3)+1;
    }
};