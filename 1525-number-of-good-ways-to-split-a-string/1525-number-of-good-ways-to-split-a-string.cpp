class Solution {
public:
    int numSplits(string s) {
        int n=s.length(),ans=0;
        unordered_map<char,int>left,right;
        for(int i=1;i<n;i++)
        {
            right[s[i]]++;
        }
        for(int i=1;i<n;i++)
        {
            left[s[i-1]]++;
            if(left.size()==right.size()) ans++;
            right[s[i]]--;
            if(right[s[i]]==0) right.erase(s[i]);
        }
        return ans;
    }
};