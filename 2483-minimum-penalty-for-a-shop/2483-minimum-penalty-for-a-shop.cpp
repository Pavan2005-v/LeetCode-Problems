class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size(),count=0;
        // if(n==1)
        // {
        //     return 0;
        // }
        vector<int>suff(n);
        int ans=INT_MAX,ind;
        if(customers[n-1]=='Y') suff[n-1]=1;
        for(int i=n-2;i>=0;i--)
        {
            suff[i]=(customers[i]=='Y'?suff[i+1]+1:suff[i+1]);
        }
        // for(int i:suff) cout<<i<<" ";
        // cout<<endl;
        if(suff[0]<ans)
        {
            ans=suff[0];
            ind=0;
        }
        for(int i=1;i<n;i++)
        {
            if(customers[i-1]=='N') count++;
            if(ans>suff[i]+count)
            {
                ans=suff[i]+count;
                ind=i;
            }
        }
        if(customers[n-1]=='N') count++;
        if(ans>count)
        {
            ans=count;
            ind=n;
        }
        return ind;
    }
};