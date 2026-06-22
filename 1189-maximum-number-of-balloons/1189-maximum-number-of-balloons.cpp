class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int ans=INT_MAX;
        vector<int>temp(26);
        for(char c:text)
        {
            temp[c-'a']++;
        }
        ans=min({ans,temp['b'-'a'],temp['a'-'a'],temp['l'-'a']/2,temp['o'-'a']/2,temp['n'-'a']});
        return ans;
    }
};