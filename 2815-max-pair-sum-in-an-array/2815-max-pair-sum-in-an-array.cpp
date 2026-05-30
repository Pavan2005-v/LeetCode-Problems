class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_map<int,vector<int>>mpp;
        vector<int>largest;
        for(int i:nums)
        {
            int maxi=INT_MIN;
            int num=i;
            while(num>0)
            {
                maxi=max(maxi,num%10);
                num/=10;
            }
            mpp[maxi].push_back(i);
        }
        int ans=-1;
        for(auto &it:mpp)
        {
            if(it.second.size()>=2) sort(it.second.rbegin(),it.second.rend());
        }
        for(auto it:mpp)
        {
            if(it.second.size()>=2) ans=max(ans,it.second[0]+it.second[1]);
        }
        return ans;
    }
};