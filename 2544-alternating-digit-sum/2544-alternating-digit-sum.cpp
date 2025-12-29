class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int>temp;
        int sum=0;
        while(n>0)
        {
            temp.push_back(n%10);
            n/=10;
        }
        reverse(temp.begin(),temp.end());
        if(temp.size()%2==0)
        {
            for(int i=0;i<temp.size();i+=2)
            {
                sum+=(temp[i]);
                sum+=(-temp[i+1]);
            }
        }
        else
        {
            for(int i=0;i<temp.size()-1;i+=2)
            {
                sum+=(temp[i]);
                sum+=(-temp[i+1]);
            }
            sum+=temp[temp.size()-1];
        }
        return sum;
    }
};