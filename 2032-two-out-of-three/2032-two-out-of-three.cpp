class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++)
        {
            if(find(nums2.begin(),nums2.end(),nums1[i])!=nums2.end()) ans.push_back(nums1[i]);
            else if(find(nums3.begin(),nums3.end(),nums1[i])!=nums3.end()) ans.push_back(nums1[i]);   
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(find(nums1.begin(),nums1.end(),nums2[i])!=nums1.end()) ans.push_back(nums2[i]);
            else if(find(nums3.begin(),nums3.end(),nums2[i])!=nums3.end()) ans.push_back(nums2[i]);   
        }
        for(int i=0;i<nums3.size();i++)
        {
            if(find(nums2.begin(),nums2.end(),nums3[i])!=nums2.end()) ans.push_back(nums3[i]);
            else if(find(nums1.begin(),nums1.end(),nums3[i])!=nums1.end()) ans.push_back(nums3[i]);   
        }
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
    }
};