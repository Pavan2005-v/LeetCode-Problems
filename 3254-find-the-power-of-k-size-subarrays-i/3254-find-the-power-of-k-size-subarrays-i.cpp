class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int l=0,r=k-1,pt=0,count=0;
        vector<int>ans;
        for(int i=0;i<k-1;i++)
        {
            if(nums[i+1]-nums[i]==1) count++;
            else count=0;
        }
        if(count!=k-1)
        {
            ans.push_back(-1);
            // count=0;
        }
        else ans.push_back(nums[k-1]);
        while(r<nums.size()-1)
        {
            l++;
            r++;
            if(nums[r]-nums[r-1]==1) count++;
            else count=0;
            if(count>=k-1) ans.push_back(nums[r]);
            else ans.push_back(-1);
        }
        return ans;
    }
};