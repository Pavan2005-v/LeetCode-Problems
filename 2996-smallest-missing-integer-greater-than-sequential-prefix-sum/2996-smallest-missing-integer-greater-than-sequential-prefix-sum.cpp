class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size(),sum=0,k=0;
        unordered_set<int>st;
        for(int i:nums) st.insert(i);
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]+1!=nums[i+1])
            {
                k=1;
                sum+=nums[i];
                break;
            }
            sum+=nums[i];
        }
        if(!k) sum+=nums[n-1];
        while(1)
        {
            if(!st.contains(sum))
            {
                return sum;
            }
            sum++;
        }
        return sum;
    }
};