class Solution {
public:
    int maxDistance(string moves) {
        unordered_map<int,int>mpp;
        int maxi=INT_MIN;
        int a=0,b=0,c1=0;
        for(char c:moves)
        {
            if(c!='_')
            {
                mpp[c]++;
            }
            if(c=='R') a++;
            else if(c=='L') a--;
            else if(c=='U') b++;
            else if(c=='D') b--;
            else if(c=='_') c1++;
        }
        //LU_D_U
        char c;
        for(auto it:mpp)
        {
            if(it.second>maxi)
            {
                maxi=it.second;
                c=it.first;
            }
        }
        if(c=='U') b+=c1;
        else if(c=='D') b-=c1;
        else if(c=='L') a-=c1;
        else if(c=='R') a+=c1;
        return abs(a)+abs(b);
    }
};