class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>st;
        for(int i:nums)
        {
            if(i%k==0) st.insert(i);
        }
        int num=1;
        while(1)
        {
            if(!st.contains(num*k)) return num*k;
            num++;
        }
        return 0;
    }
};