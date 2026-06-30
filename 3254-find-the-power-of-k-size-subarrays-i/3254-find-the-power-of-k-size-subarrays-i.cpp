class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int>ans;
        int l=0,r=k-1;
        long long sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        int num=nums[0]-1,num1=nums[k-1];
        long long exSum=((long long)num1*(num1+1)/2)-((long long)num*(num+1)/2);
        if(sum==exSum)
        {
            int m=0;
            for(int i=0;i<k-1;i++)
            {
                if(nums[i]+1!=nums[i+1])
                {
                    m=1;
                    ans.push_back(-1);
                    break;
                }
            }
            if(!m) ans.push_back(nums[r]);
        }
        else ans.push_back(-1);
        while(r<nums.size()-1)
        {
            sum-=nums[l];
            l++;
            r++;
            sum+=nums[r];
            int num=nums[l]-1,num1=nums[r];
            long long exSum=((long long)num1*(num1+1)/2)-((long long)num*(num+1)/2);
            if(sum==exSum)
            {
                int m=0;
                for(int i=l;i<r;i++)
                {
                    if(nums[i]+1!=nums[i+1])
                    {
                        m=1;
                        ans.push_back(-1);
                        break;
                    }
                }
                if(!m) ans.push_back(nums[r]);
            }
            else ans.push_back(-1);
        }
        
        return ans;
    }
};