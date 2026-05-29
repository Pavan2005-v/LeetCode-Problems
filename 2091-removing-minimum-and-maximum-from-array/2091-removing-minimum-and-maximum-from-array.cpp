class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi=INT_MIN,mini=INT_MAX;
        for(int i:nums)
        {
            maxi=max(i,maxi);
            mini=min(i,mini);
        }
        int ind1,ind2;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==maxi) ind1=i;
            if(nums[i]==mini) ind2=i;
        }
        int temp1=max(ind1,ind2)+1;
        int temp2=nums.size()-min(ind1,ind2);
        int temp3=ind1+1+(nums.size()-ind2);
        int temp4=ind2+1+(nums.size()-ind1);
        temp1=min(temp1,temp2);
        temp1=min(temp1,temp3);
        temp1=min(temp1,temp4);
        return temp1;
    }
};