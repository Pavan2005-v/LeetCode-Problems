class Solution {
public:
    int nextBeautifulNumber(int n) {
        int num=n+1;
        while(num<=1224444)
        {
            int temp=num;
            vector<int>count(10);
            while(num>0)
            {
                count[num%10]++;
                num/=10;
            }
            int k=1;
            for(int i=0;i<10;i++)
            {
                if(count[i]>0&&count[i]!=i)
                {
                    k=0;
                    break;
                }
            }
            if(k) return temp;
            temp++;
            num=temp;
        }
        return n;
    }
};