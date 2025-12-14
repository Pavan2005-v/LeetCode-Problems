class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int>ans;
        for(int i:nums)
        {
            int k=i;
            int temp=0;
            while(k>0)
            {
                temp=temp*10+k%10;
                k/=10;
            }
            ans.push_back(temp);
        }
        copy(ans.begin(),ans.end(),back_inserter(nums));
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        return nums.size();
    }
};