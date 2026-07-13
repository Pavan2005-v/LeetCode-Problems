class Solution {
public:
    long long totalCost(vector<int>& nums, int k, int candidates) {

        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pq;
        for(int i=0;i<candidates;i++)
        {
            pq.push({nums[i],i,true});
        }
        int ind=nums.size()-candidates;
        long long ans=0;
        int p1=candidates,p2=ind-1;
        if(candidates*2>=nums.size())
        {
            for(int i=candidates;i<nums.size();i++)
            {
                pq.push({nums[i],i,true});
            }
            while(k>0)
            {
                ans+=pq.top()[0];
                pq.pop();
                k--;
            }
            return ans;
        }
        else
        {
            for(int i=ind;i<nums.size();i++)
            {
                pq.push({nums[i],i,false});
            }
        }
        while(pq.size()!=0&&k>0)
        {
            if(p1<=p2)
            {
                if(pq.top()[2]==1)
                {
                    ans+=pq.top()[0];
                    pq.pop();
                    pq.push({nums[p1],p1,true});
                    p1++;
                }
                else
                {
                    ans+=pq.top()[0];
                    pq.pop();
                    pq.push({nums[p2],p2,false});
                    p2--;
                } 
            }
            else
            {
                ans+=(pq.top()[0]);
                pq.pop();
            }
            k--;
        }
        return ans;
    }
};