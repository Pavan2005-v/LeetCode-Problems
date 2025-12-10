class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        unordered_map<int,int>mpp;
        for(int i:nums) mpp[i]++;
        for(auto it:mpp)
        {
            if(it.second==1) sum+=it.first;
        }
        return sum;        
    }
};