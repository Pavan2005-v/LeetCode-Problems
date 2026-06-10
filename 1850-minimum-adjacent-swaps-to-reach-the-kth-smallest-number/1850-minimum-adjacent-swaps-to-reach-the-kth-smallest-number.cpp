class Solution {
public:
    int getMinSwaps(string num, int k) {
        string org=num;
        do
        {
            next_permutation(num.begin(),num.end());
            k--;
        }
        while(k);
        int l=num.length()-1,r=num.length()-1,ans=0;
        int k1=0;
        while(r>=0)
        {
            if(org[r]!=num[l])
            {
                l--;
                k1=1;
            }
            else if(org[r]==num[l])
            {
                if(k1)
                {
                    int p1=l;
                    int p2=l+1;
                    while(p2<=r)
                    {
                        swap(num[p1],num[p2]);
                        p1++;
                        p2++;
                        ans++;
                    }
                }
                r--;
                l=r;
                k1=0;
            }
        }
        return ans;
    }
};