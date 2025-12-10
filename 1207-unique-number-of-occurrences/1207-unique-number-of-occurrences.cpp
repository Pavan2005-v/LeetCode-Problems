class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mpp;
        for(int i:arr) mpp[i]++;
        set<int> temp;
        for(auto it:mpp) 
        {
            if(!temp.count(it.second))
            {
                temp.insert(it.second);
            }
            else return false;
        }
        return true;       
    }
};