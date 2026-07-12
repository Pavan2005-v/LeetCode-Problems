class Solution {
public:
    int numTriplets(vector<int>& nums1, vector<int>& nums2) {
        int ans=0;
        for(int i=0;i<nums1.size();i++)
        {
            unordered_map<int,int>mpp;
            long long num=(long long)nums1[i]*nums1[i];
            for(int j=0;j<nums2.size();j++)
            {
                if(num%nums2[j]==0&&mpp.contains(num/nums2[j]))
                {
                    ans+=(mpp[num/nums2[j]]);
                }
                mpp[nums2[j]]++;
            }
        }
        for(int i=0;i<nums2.size();i++)
        {
            unordered_map<int,int>mpp;
            long long num=(long long)nums2[i]*nums2[i];
            for(int j=0;j<nums1.size();j++)
            {
                if(num%nums1[j]==0&&mpp.contains(num/nums1[j]))
                {
                    ans+=(mpp[num/nums1[j]]);
                }
                mpp[nums1[j]]++;
            }   
        }
        return ans;
    }
};