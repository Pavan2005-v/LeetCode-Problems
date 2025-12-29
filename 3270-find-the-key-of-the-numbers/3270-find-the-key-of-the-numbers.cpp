class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        vector<int>n1;
        vector<int>n2;
        vector<int>n3;
        int a,b,c;
        a=num1;
        b=num2;
        c=num3;
        while(a>0)
        {
            n1.push_back(a%10);
            a/=10;
        }
        while(b>0)
        {
            n2.push_back(b%10);
            b/=10;
        }
        while(c>0)
        {
            n3.push_back(c%10);
            c/=10;
        }
        if(n1.size()<4)
        {
            while(n1.size()!=4) n1.push_back(0);
            reverse(n1.begin(),n1.end());
        }
        else if(n1.size()>=4) reverse(n1.begin(),n1.end());
        if(n2.size()<4)
        {
            while(n2.size()!=4) n2.push_back(0);
            reverse(n2.begin(),n2.end());            
        }
        else if(n2.size()>=4) reverse(n2.begin(),n2.end());
        if(n3.size()<4)
        {
            while(n3.size()!=4) n3.push_back(0);
            reverse(n3.begin(),n3.end());
        }
        else if(n3.size()>=4) reverse(n3.begin(),n3.end());
        int digit=0;
        cout<<endl;
        for(int i:n2) cout<<i<<" ";
        cout<<endl;
        for(int i:n3) cout<<i<<" ";
        for(int i=0;i<4;i++)
        {
            int mini=min({n1[i],n2[i],n3[i]});
            digit=digit*10+mini;
        }
        return digit;
    }
};