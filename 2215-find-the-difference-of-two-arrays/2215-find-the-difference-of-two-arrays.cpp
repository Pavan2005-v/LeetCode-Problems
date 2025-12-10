class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        vector<int>temp1;
        vector<int>temp2;
        for(int i=0;i<nums1.size();i++)
        {
            if(find(nums2.begin(),nums2.end(),nums1[i])==nums2.end())
            {
                temp1.push_back(nums1[i]);
            }
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(find(nums1.begin(),nums1.end(),nums2[i])==nums1.end())
            {
                temp2.push_back(nums2[i]);
            }
        }
        unordered_set<int> seen;
        vector<int> result1;
        for(int x:temp1)
        {
            if(!seen.count(x))
            {
                seen.insert(x);
                result1.push_back(x);
            }
        }
        unordered_set<int> seen1;
        vector<int> result2;
        for(int x:temp2)
        {
            if(!seen1.count(x))
            {
                seen1.insert(x);
                result2.push_back(x);
            }
        }        
        ans.push_back(result1);
        ans.push_back(result2);
        return ans;
    }
};