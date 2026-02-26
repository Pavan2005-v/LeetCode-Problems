class Solution {
public:
    int returnMax(int a,int b)
    {
        int ans=INT_MIN;
        int num;
        while(b>=0)
        {
            int val=a^b;
            if(val>ans)
            {
                ans=val;
                num=b;
            }
            b--;
        }
        return num;
    }
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int>temp;
        temp.push_back(nums[0]);
        int num=nums[0];
        vector<int>ans;
        for(int i=1;i<nums.size();i++)
        {
            num^=nums[i];
            temp.push_back(num);
        }
        for(int i=temp.size()-1;i>=0;i--)
        {
            ans.push_back(returnMax(temp[i],(pow(2,maximumBit))-1));
        }
        return ans;
    }
};