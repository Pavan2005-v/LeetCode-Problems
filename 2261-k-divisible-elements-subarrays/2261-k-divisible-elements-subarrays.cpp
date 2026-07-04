class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        int l=0,r=0,count=0;
        vector<vector<int>>sub;
        while(r<nums.size())
        {
            if(nums[r]%p==0) count++;
            if(count>k)
            {
                sub.push_back({l,r});
                while(count>k)
                {
                    if(nums[l]%p==0) count--;
                    l++;
                }
            }
            r++;
        }
        if(count<=k) sub.push_back({l,r});
        set<vector<int>>st;
        for(int i=0;i<sub.size();i++)
        {
            for(int j=sub[i][0];j<sub[i][1];j++)
            {
                vector<int>temp;
                for(int k=j;k<sub[i][1];k++)
                {
                    temp.push_back(nums[k]);
                    st.insert(temp);
                }
            }
        }
        return st.size();
    }
};