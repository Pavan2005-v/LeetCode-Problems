class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        unordered_set<int>st;
        int l=0,r=0,ans=0;
        while(r<nums.size())
        {
            while(nums[r]-nums[l]>k)
            {
                l++;
            }
            if(l!=r&&nums[r]-nums[l]==k) 
            {
                if(!st.contains(nums[l]))
                {
                    ans++;
                    st.insert(nums[l]);
                }
            }
            r++;
        }
        return ans;
    }
};