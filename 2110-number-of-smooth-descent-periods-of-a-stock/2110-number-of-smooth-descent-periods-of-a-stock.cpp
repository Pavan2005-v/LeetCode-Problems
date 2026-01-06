class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        //long long int count=prices.size();
        long long int count=0;
        long long int k=0;
        int l=0;
        vector<long long int>temp(prices.size());
        for(int i=0;i<prices.size()-1;i++)
        {
            if(prices[i]-prices[i+1]==1)
            {
                k++;
                temp[i]=1;
                temp[i+1]=1;
            }
            else if(k>0&&prices[i]-prices[i+1]!=1)
            {
                k++;
                long long int sub=(k*(k+1))/2;
                cout<<sub<<endl;
                count+=sub;
                k=0;
            }
        }
        if(k>0)
        {
            k++;
            count+=(k*(k+1))/2;
        }
        for(int i=0;i<prices.size();i++)
        {
            if(temp[i]==0) count++;
        }
        return count;
    }
};