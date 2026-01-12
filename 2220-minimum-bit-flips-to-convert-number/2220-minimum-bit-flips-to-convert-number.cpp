class Solution {
public:
    int minBitFlips(int start, int end) {
        string temp1="";
        string temp2="";
        while(start>0)
        {
            temp1+=((start%2)+'0');
            start/=2;
        }
        while(end>0)
        {
            temp2+=((end%2)+'0');
            end/=2;
        }
        if(temp1.size()>temp2.size())
        {
            while(temp1.size()!=temp2.size()) temp2+='0';
        }
        else if(temp1.size()<temp2.size())
        {
            while(temp1.size()!=temp2.size()) temp1+='0';
        }
        int ans=0;
        for(int i=0;i<temp1.size();i++)
        {
            if(temp1[i]!=temp2[i]) ans++;
        }
        return ans;
    }
};