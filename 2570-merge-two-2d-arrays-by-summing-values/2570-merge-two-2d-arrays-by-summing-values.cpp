class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        map<int,int>mpp;
        for(int i=0;i<nums1.size();i++)
        {
            mpp[nums1[i][0]]=nums1[i][1];
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(mpp.contains(nums2[i][0]))
            {
                mpp[nums2[i][0]]+=nums2[i][1];
            }
            else
            {
                mpp[nums2[i][0]]=nums2[i][1];
            }
        }
        for(auto it:mpp)
        {
            ans.push_back({it.first,it.second});
        }
        return ans;
        
    }
};