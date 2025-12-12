class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int count=0;
        unordered_map<string,int>mpp;
        unordered_map<string,int>mpp1;
        for(string i:words1) mpp[i]++;
        for(string i:words2) mpp1[i]++;
        for(auto it:mpp)
        {
            if(mpp1.contains(it.first))
            {
                if(it.second==1&&mpp1[it.first]==1)
                {
                    count++;
                }
            }
        }
        return count;       
    }
};