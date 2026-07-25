class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        if(n%2==0&&m%2==0) return 0;
        int x=0,ans=0;
        for(int i:nums2) 
        {
            x^=i;
        }
        if(n&1&&!(m&1)) return x;
        for(int i:nums1)
        {
            ans=ans^(x^i);
        }
        return ans;
    }
};