class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mpp;
        for(char c:s) mpp[c]++;
        int maxi=INT_MIN;
        int ans=0;
        for(auto it:mpp)
        {
            if(it.second&1) maxi=max(maxi,it.second);
            else ans+=it.second;
        }
        int count=0;
        for(auto it:mpp)
        {
            if(it.second&1&&it.second!=maxi) ans+=(it.second-1);
            if(it.second==maxi) count++;
        }
        if(count==1) ans+=maxi;
        else if(count>1)
        {
            ans+=maxi;
            maxi--;
            count--;
            ans+=(count*maxi);
        }
        return ans;
    }
};