class Solution {
public:
    vector<int> fairCandySwap(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int asum=0;
        int bsum=0;
        vector<int>ans;
        for(int i:nums1) asum+=i;
        for(int i:nums2) bsum+=i;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                int temp=asum;
                temp-=nums1[i];
                int t=bsum;
                t-=nums2[j];
                t+=nums1[i];
                temp+=nums2[j];
                if(t==temp)
                {
                    ans.push_back(nums1[i]);
                    ans.push_back(nums2[j]);
                    return ans;
                }
            }
        }
        return ans;
    }
};