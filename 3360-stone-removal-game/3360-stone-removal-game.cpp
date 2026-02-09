class Solution {
public:
    bool canAliceWin(int n) {
        int num=10;
        int ans=0;
        while(n>=0)
        {
            n-=num;
            num--;
            ans++;
        }
        if(ans%2)
        {
            return false;
        }
        else return true;
    }
};