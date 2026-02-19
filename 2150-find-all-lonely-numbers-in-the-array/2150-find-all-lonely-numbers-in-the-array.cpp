class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int>mpp;
        unordered_set<int>st;
        vector<int>ans;
        for(int i:nums)
        {
            mpp[i]++;
            st.insert(i);
        }
        for(auto it:mpp)
        {
            if(it.second==1)
            {
                if(!st.contains(it.first+1)&&!st.contains(it.first-1))
                {
                    ans.push_back(it.first);
                }
            }
        }
        return ans;
    
    }
};