class Solution {
public:
    int maxDistance(string moves) {
        int maxi=INT_MIN;
        int a=0,b=0,c1=0;
        int r=0,l=0,u=0,d=0;
        for(char c:moves)
        {
            if(c=='R')
            {
                a++; 
                r++;
            }
            else if(c=='L')
            {
                a--; 
                l++;
            }
            else if(c=='U')
            {
                b++; 
                u++;
            }
            else if(c=='D')
            {
                b--; 
                d++;
            }
            else if(c=='_') c1++;
        }
        char c;
        maxi=max({l,r,u,d});
        if(maxi==u) b+=c1;
        else if(maxi==d) b-=c1;
        else if(maxi==l) a-=c1;
        else if(maxi==r) a+=c1;
        return abs(a)+abs(b);
    }
};