class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
       vector<int>ans(pref.size());
       ans[0]=pref[0];
       int x=0;
       for(int i=1;i<pref.size();i++)
       {
            x^=ans[i-1];
            ans[i]=x^pref[i];
       }
       return ans;
    }
};