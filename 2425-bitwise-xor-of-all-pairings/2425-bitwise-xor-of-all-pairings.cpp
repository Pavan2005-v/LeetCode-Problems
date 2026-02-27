class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int ans=0;
        int x=0;
        for(int i:nums1) x^=i;
        for(int j=0;j<nums2.size();j++)
        {
            ans^=nums2[j];
        }
        if((nums1.size()&1)&&(nums2.size()&1)) return ans;
        else if(!(nums1.size()&1)&&!(nums2.size()&1)) return 0;
        else if((nums1.size()&1)&&(!(nums2.size()&1))) return ans;
        else return x;
    }
};