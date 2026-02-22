class Solution {
public:
    int binaryGap(int n) {
        int ans=0;
        string temp="";
        while(n>0)
        {
            temp+=(to_string(n%2));
            n/=2;
        }
        for(int i=0;i<temp.length();i++)
        {
            if(temp[i]=='1')
            {
                int count=0;
                for(int j=i+1;j<temp.length();j++)
                {
                    count++;
                    if(temp[j]=='1') break;
                }
                ans=max(ans,count);
            }
        }
        return ans;
    }
};