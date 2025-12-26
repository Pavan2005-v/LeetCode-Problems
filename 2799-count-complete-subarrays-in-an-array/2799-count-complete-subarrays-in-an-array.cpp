class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int count=0;
        unordered_set<int>st;
        for(int i:nums) st.insert(i);
        int window=st.size();
        for(int i=0;i<nums.size();i++)
        {
            unordered_set<int>s;
            int j=i;
            while(j<nums.size())
            {
                s.insert(nums[j]);
                if(s.size()==st.size()) count++;
                j++;
            }  
        }
        return count;
    }
};