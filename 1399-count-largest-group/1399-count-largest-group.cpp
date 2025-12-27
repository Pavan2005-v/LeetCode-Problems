class Solution {
public:
    int countLargestGroup(int n) {
        if(n<=9) return n;
        else if(n>9)
        {
            int count1=0;
            for(int i=10;i<=n;i++)
            {
                int sum=0;
                int temp=i;
                while(temp>0)
                {
                    sum+=(temp%10);
                    temp/=10;
                }
                if(sum<10) count1++;
            }
            return count1;
        }
        return n;
    }
};