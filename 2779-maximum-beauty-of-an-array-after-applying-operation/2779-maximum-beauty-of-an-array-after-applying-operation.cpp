class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<int>start,end;
        for(int i=0;i<nums.size();i++)
        {
            start.push_back(nums[i]-k);
            end.push_back(nums[i]+k);
        }
        int i=0,j=0,ans=0,count=0;
        while(i<nums.size()&&j<nums.size())
        {
            if(start[i]<=end[j])
            {
                i++;
                ans++;
                count=max(count,ans);
            }
            else
            {
                j++;
                ans--;
            }
        }
        return count;
    }
};