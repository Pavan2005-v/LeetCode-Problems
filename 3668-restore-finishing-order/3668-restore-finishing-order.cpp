class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int>temp(friends.begin(),friends.end());
        vector<int>ans;
        for(int i:order)
        {
            if(temp.contains(i)) ans.push_back(i);
        }
        return ans;
    }
};