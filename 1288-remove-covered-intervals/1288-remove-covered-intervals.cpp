class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end(),[](const vector<int>&a,const vector<int>&b){
            if(a[0]==b[0])
            {
                return a[1]<b[1];
            }
            return a[0]>b[0];
        });
        vector<int>temp(nums.size());
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int pos1=nums[i][0];
                int pos2=nums[i][1];
                for(int j=i-1;j>=0;j--)
                {
                    if(temp[j]==0)
                    {
                        if(nums[j][0]>=pos1&&nums[j][1]<=pos2)
                        {
                            ans++;
                            temp[j]=1;
                        }
                    }
                }
        }
        return nums.size()-ans;
    }
};