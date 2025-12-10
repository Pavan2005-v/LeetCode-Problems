class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i:nums) mpp[i]++;
        int ans=0;
        int k=0;
        for(auto it:mpp)
        {
            if(it.second==2)
            {
                ans^=it.first;
                k=1;
            }
        }
        if(k) return ans;
        else return 0;        
    }
};