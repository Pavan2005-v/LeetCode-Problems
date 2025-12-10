class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i:nums) mpp[i]++;
        int max1=0;
        for(auto it:mpp)
        {
            max1=max(max1,it.second);
        }
        int count=0;
        for(auto it:mpp)
        {
            if(it.second==max1) count+=it.second;
        }
        return count;
    }
};