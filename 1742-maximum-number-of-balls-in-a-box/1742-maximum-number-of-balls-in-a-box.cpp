class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int>mpp;
        for(int i=lowLimit;i<=highLimit;i++)
        {
            int temp=i;
            int sum=0;
            while(temp>0)
            {
                sum+=(temp%10);
                temp/=10;
            }
            mpp[sum]++;
        }
        int maxi=INT_MIN;
        for(auto it:mpp) maxi=max(maxi,it.second);
        return maxi;
    }
};