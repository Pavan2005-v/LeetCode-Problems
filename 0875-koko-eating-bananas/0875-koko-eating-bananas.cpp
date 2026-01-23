class Solution {
public:
    bool isValid(vector<int>nums,int mid,int h)
    {
        long long int c=0;
        for(int i:nums)
        {
            c+=(i+mid-1)/mid;
        }
        return c<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int i=1;
        int j=*max_element(piles.begin(),piles.end());
        int ans;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(isValid(piles,mid,h))
            {
                ans=mid;
                j=mid-1;
            }
            else i=mid+1;
        }
        return ans;
    }
};