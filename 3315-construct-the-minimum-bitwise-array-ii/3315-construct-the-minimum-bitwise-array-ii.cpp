class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            int k=0;
            for(int j=31;j>=0;j--)
            {
                if(nums[i]&(1<<j))
                {
                    int temp=(nums[i]^(1<<j));
                    if((temp|temp-1)==nums[i])
                    {
                        ans.push_back(temp-1);
                        k=1;
                        break;
                    }
                    else if((temp|temp+1)==nums[i])
                    {
                        ans.push_back(temp);
                        k=1;
                        break;
                    }
                }
            }
            if(!k) ans.push_back(-1);
        }
        return ans;
    }
};