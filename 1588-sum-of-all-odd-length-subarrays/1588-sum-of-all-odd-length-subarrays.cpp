class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        vector<int>ps;
        ps.push_back(arr[0]);
        ps.resize(arr.size());
        for(int i=1;i<arr.size();i++) ps[i]=ps[i-1]+arr[i];
        int tsum=0;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i;j<arr.size();j++)
            {
                if(((j-i)%2==0))
                {
                    if(i==0)
                    {
                        tsum+=ps[j];
                    }
                    else
                    {
                        int sum=ps[j]-ps[i-1];
                        tsum+=sum;
                    }
                }
            }
        }
        return tsum;
    }
};