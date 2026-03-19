class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mpp;
        unordered_set<int>st;
        for(int i:nums1)
        {
            mpp[i]++;
        }
        for(int i:nums2)
        {
            if(mpp[i]>0) st.insert(i);
        }
        vector<int>ans(st.begin(),st.end());
        return ans;
    }
};