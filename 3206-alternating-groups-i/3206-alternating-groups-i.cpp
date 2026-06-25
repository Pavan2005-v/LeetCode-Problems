class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int l=0,r=2,ans=0;
        int n=colors.size()-1;
        while(r<colors.size())
        {
            if(colors[l]==colors[r]&&colors[l]!=colors[l+1]) ans++;
            l++;
            r++;
        }
        if(colors[n-1]!=colors[n]&&colors[0]==colors[n-1]) ans++;
        if(colors[n]!=colors[0]&&colors[n]==colors[1]) ans++;
        return ans;
    }
};