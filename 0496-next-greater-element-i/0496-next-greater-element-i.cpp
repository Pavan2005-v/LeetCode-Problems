class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int l=0,r=0,k=0;
        vector<int>ans;
        while(l<nums1.size())
        {
            if(r>=nums2.size())
            {
                ans.push_back(-1);
                l++;
                r=0;
                k=0;
            }
            if(l<nums1.size()&&nums1[l]==nums2[r])
            {
                k=1;
            }
            if(l<nums1.size()&&nums1[l]<nums2[r]&&k)
            {
                ans.push_back(nums2[r]);
                l++;
                r=-1;
                k=0;
            }
            r++;
        }
        return ans;
    }
};