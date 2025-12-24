class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans;
        unordered_map<int,int>mpp;
        for(int i:digits)mpp[i]++;
        for(int i=100;i<=999;i++)
        {
           unordered_map<int,int>mpp1;
            int temp=i;
            while(temp>0)
            {
                mpp1[temp%10]++;
                temp/=10;
            }
            int k=0;
            for(auto it:mpp1)
            {
                if(mpp.contains(it.first))
                {
                    if(mpp1[it.first]>mpp[it.first])
                    {
                        k=1;
                        break;
                    }
                }
                else if(!mpp.contains(it.first))
                {
                    k=1;
                    break;
                }
            }
            if(!k&&i%2==0) ans.push_back(i);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};