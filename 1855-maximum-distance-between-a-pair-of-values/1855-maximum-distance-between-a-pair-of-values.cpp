class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int l=0;
        int r=0;
        int ans=0;
        while(l<nums1.size()&&r<nums2.size())
        {
            if(nums1[l]>nums2[r])
            {
                l++;
            }
            ans=max(ans,r-l);
            r++;
        }
        return ans;
    }
};