class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int l=0,r=minutes-1,maxSum=0,sum=0;
        for(int i=0;i<=r;i++)
        {
            if(grumpy[i]==1)
            {
                sum+=customers[i];
            }
        }
        maxSum=sum;
        while(r<customers.size()-1)
        {
            if(grumpy[l]==1)
            {
                sum-=customers[l];
            }
            l++;
            r++;
            if(grumpy[r]==1)
            {
                sum+=customers[r];
            }
            maxSum=max(sum,maxSum);
        }
        for(int i=0;i<customers.size();i++)
        {
            if(grumpy[i]==0) maxSum+=customers[i];
        }
        return maxSum;
    }
};