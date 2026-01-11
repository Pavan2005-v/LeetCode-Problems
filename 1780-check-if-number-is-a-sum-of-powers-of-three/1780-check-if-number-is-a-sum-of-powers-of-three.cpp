class Solution {
public:
    bool checkPowersOfThree(int n) {
        vector<int>temp;
        int c=3;
        while(c<=n)
        {
            temp.push_back(c);
            c*=3;
        }
        int sum=0;
        for(int i:temp) cout<<i<<" ";
        for(int i=temp.size()-1;i>=0;i--)
        {
            if(temp[i]+sum<=n)
            {
                sum+=temp[i];
            }
        }
        if(sum+1==n) return true;
        else return sum==n;
    }
};