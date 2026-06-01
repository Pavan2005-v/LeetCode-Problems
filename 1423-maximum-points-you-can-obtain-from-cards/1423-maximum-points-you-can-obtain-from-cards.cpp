class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        vector<int>temp1;
        vector<int>temp2;
        temp1.push_back(nums[0]);
        for(int i=1;i<k;i++)
        {
            temp1.push_back(temp1[i-1]+nums[i]);
        }
        if(nums.size()<=k) return temp1[temp1.size()-1];
        temp2.push_back(nums[nums.size()-1]);
        int in=0;
        for(int i=nums.size()-2;i>=nums.size()-k;i--) 
        {
            temp2.push_back(temp2[in]+nums[i]);
            in++;
        }
        int ans=max(temp1[k-1],temp2[temp2.size()-1]);
        int ind=temp2.size()-2;
        for(int i=0;i<temp1.size()-1;i++)
        {
            ans=max(temp1[i]+temp2[ind],ans);
            ind--;
        }
        ind=temp1.size()-2;
        for(int i=0;i<temp2.size()-1;i++)
        {
            ans=max(temp2[i]+temp1[ind],ans);
            ind--;
        }
        return ans;
    }
};