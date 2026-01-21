class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int sum=0;
        sort(cost.rbegin(),cost.rend());
        int c=0;
        for(int i=2;i<cost.size();i+=3)
        {
            sum+=cost[i];
        }
        cout<<sum<<endl;
        int sum1=0;
        for(int i:cost) sum1+=i;
        cout<<sum1;
        return sum1-sum;
    }
};