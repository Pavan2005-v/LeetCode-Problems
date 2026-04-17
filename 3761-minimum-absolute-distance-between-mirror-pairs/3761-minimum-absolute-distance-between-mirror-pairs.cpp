class Solution {
public:
    int rev(int n)
    {
        int num=0;
        while(n>0)
        {
            num=num*10+(n%10);
            n/=10;
        }
        return num;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            int num=rev(nums[i]);
            if(mpp.contains(nums[i]))
            {
                ans=min(ans,abs(mpp[nums[i]]-i));
            }
            mpp[num]=i;
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};