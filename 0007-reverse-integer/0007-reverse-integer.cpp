class Solution {
public:
    int reverse(int x) {
    if(x>=INT_MAX||x<=INT_MIN) return 0;
    long long int temp;
    if(x>0)
    {
        temp=0;
        while(x>0)
        {
            temp=temp*10+x%10;
            if(temp>INT_MAX||temp<INT_MIN) return 0;
            x/=10;
        }
    }
    else
    {
        temp=0;
        x=-(x);
        while(x>0)
        {
            temp=temp*10+x%10;
            if(temp>INT_MAX||temp<INT_MIN) return 0;
            x/=10;           
        }
        temp=-temp;
    }
    return temp;
    }
};