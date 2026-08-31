class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n=nums.size(),even=0,odd=0,e=0,o=0;
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            if(nums[i]&1) odd++;
            else even++;
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]&1)
            {
                o++;
                ans[i]=even-e;
            }
            else
            {
                e++;
                ans[i]=odd-o;
            }
        }
        return ans;
    }
};