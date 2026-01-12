class Solution {
public:
    int countTriples(int n) {
        int count=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==j) continue;
                for(int k=0;k<=n;k++)
                {
                    if(i==k||j==k) continue;
                    if((i*i)+(j*j)==(k*k))
                    {
                        count++;
                        break;
                    }
                }
            }
        }
        return count;
    }
};