class Solution {
public:
    bool isThree(int n) {
        int count1=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0) count1++;
        }
        return count1==3;
    }
};