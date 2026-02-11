class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int k=0;
            int o=0;
            for(int j=i-1;j>=0;j--)
            {
                if(nums[j]<nums[i])
                {
                    k=1;
                    break;
                }
            }
            for(int l=i+1;l<nums.size();l++)
            {
                if(k)
                {
                    if(nums[i]<nums[l])
                    {
                        o=1;
                        break;
                    }
                }
            }
            if(o)
            {
                ans++;
            }
        }
        return ans;
    }
};