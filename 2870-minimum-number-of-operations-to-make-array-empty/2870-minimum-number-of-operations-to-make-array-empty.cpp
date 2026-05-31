class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int>mpp;
        for(int i:nums) mpp[i]++;
        for(auto it:mpp) cout<<it.first<<" "<<it.second<<endl;
        for(auto it:mpp)
        {
            if(it.second==1) return -1;
            if(it.second%3==0) ans+=it.second/3;
            else if(it.second%3==1)
            {
                int num=it.second;
                int temp=(it.second/3)-1;
                ans+=(temp+2);
            }
            else if(it.second%3==2)
            {
                ans+=(it.second/3);
                ans++;
            }
            else if(it.second%2==0) ans+=(it.second/2);
        }
        return ans;
    }
};